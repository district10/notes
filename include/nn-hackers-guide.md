<!--
    [Hacker's guide to Neural Networks](file:///C:/Users/cvrs/Desktop/guide.htm)
-->

My personal experience with Neural Networks is that everything became much
clearer when I started ignoring full-page, dense derivations of
backpropagation equations and just started writing code. Thus, this
tutorial will contain very little math (I don’t believe it is necessary and
it can sometimes even obfuscate simple concepts).

-   Chapter 1: Real-valued Circuits -<

    :   看成门电路，不只是 `{0, 1}`，更是 real values 在线路上 flow。
        除了 `AND`，`OR`，`NOT` 还有 binary gates 如 `*` (multiply), `+` (add), `max`，
        unary gates 比如 `exp`，等等。

        Base Case: Single Gate in the Circuit -<

        :   base case，一个简单的 single gate in the circuit。进行 f(x,y) = x*y 的操作，
            javascript 代码如下：

            ```javascript
            var forwardMultiplyGate = function(x, y) {
              return x * y;
            };
            forwardMultiplyGate(-2, 3); // returns -6. Exciting.
            ```

            我们的目标是让它的输出变大。这里有三个策略：

            -   Strategy #1: Random Local Search -<

                :   随机在周围找点，然后看是否更大，更大就记录下来。

                    ```javascript
                    // circuit with single gate for now
                    var forwardMultiplyGate = function(x, y) { return x * y; };
                    var x = -2, y = 3; // some input values

                    // try changing x,y randomly small amounts and keep track of what works best
                    var tweak_amount = 0.01;
                    var best_out = -Infinity;
                    var best_x = x, best_y = y;
                    for(var k = 0; k < 100; k++) {
                      var x_try = x + tweak_amount * (Math.random() * 2 - 1); // tweak x a bit
                      var y_try = y + tweak_amount * (Math.random() * 2 - 1); // tweak y a bit
                      var out = forwardMultiplyGate(x_try, y_try);
                      if(out > best_out) {
                        // best improvement yet! Keep track of the x and y
                        best_out = out;
                        best_x = x_try, best_y = y_try;
                      }
                    }
                    ```

            -   Stategy #2: Numerical Gradient -<

                :   求出数值梯度。∂f(x,y)/∂x = (f(x+h,y)−f(x,y))/h，
                    这里的 h 是一个 tweak amount。Javascript 代码如下：

                    ```javascript
                    var x = -2, y = 3;
                    var out = forwardMultiplyGate(x, y); // -6
                    var h = 0.0001;

                    // 对 x 的偏导
                    var xph = x + h; // -1.9999
                    var out2 = forwardMultiplyGate(xph, y); // -5.9997
                    var x_derivative = (out2 - out) / h; // 3.0

                    // 对 y 的偏导
                    var yph = y + h; // 3.0001
                    var out3 = forwardMultiplyGate(x, yph); // -6.0002
                    var y_derivative = (out3 - out) / h; // -2.0

                    // 指定 stepsize，给输入添加一点 tweak amount，
                    // 得到新的输出，而且输出值真的更大一些！
                    var step_size = 0.01;
                    var out = forwardMultiplyGate(x, y); // before: -6
                    x = x + step_size * x_derivative; // x becomes -1.97
                    y = y + step_size * y_derivative; // y becomes 2.98
                    var out_new = forwardMultiplyGate(x, y); // -5.87! exciting.
                    ```

                    >   The derivative with respect to some input can be
                    >   computed by tweaking that input by a small amount and
                    >   observing the change on the output value.

            -   Strategy #3: Analytic Gradient -<

                :   分析导数。相比数值导数，这个需要一点数学知识。好处是可以得到
                    exact 导数，而且计算量小。

                    >   The analytic derivative requires no tweaking of the
                    >   inputs. It can be derived using mathematics (calculus).

                    Javascript 代码：

                    ```javascript
                    var x = -2, y = 3;
                    var out = forwardMultiplyGate(x, y); // before: -6
                    var x_gradient = y; // by our complex mathematical derivation above
                    var y_gradient = x;

                    var step_size = 0.01;
                    x += step_size * x_gradient; // -2.03
                    y += step_size * y_gradient; // 2.98
                    var out_new = forwardMultiplyGate(x, y); // -5.87. Higher output! Nice.
                    ```

            小结。Lets recap what we have learned: -<

            -   INPUT: We are given a circuit, some inputs and compute an
                output value.
            -   OUTPUT: We are then interested finding small changes to each
                input (independently) that would make the output higher.
            -   Strategy #1: One silly way is to randomly search for small
                pertubations of the inputs and keep track of what gives the
                highest increase in output.
            -   Strategy #2: We saw we can do much better by computing the
                gradient. Regardless of how complicated the circuit is, the
                numerical gradient is very simple (but relatively expensive) to
                compute. We compute it by probing the circuit’s output value as
                we tweak the inputs one at a time.
            -   Strategy #3: In the end, we saw that we can be even more clever
                and analytically derive a direct expression to get the analytic
                gradient. It is identical to the numerical gradient, it is
                fastest by far, and there is no need for any tweaking.

        Recursive Case: Circuits with Multiple Gates -<

        :   f(x,y,z) = (x+y)*z，直接看代码吧，看解释不如看代码。

            分三个过程：

            -   forword，计算输出： -<

                :   ```javascript
                    var forwardMultiplyGate = function(a, b) {
                      return a * b;
                    };
                    var forwardAddGate = function(a, b) {
                      return a + b;
                    };
                    var forwardCircuit = function(x,y,z) {
                      var q = forwardAddGate(x, y);
                      var f = forwardMultiplyGate(q, z);
                      return f;
                    };

                    var x = -2, y = 5, z = -4;
                    var f = forwardCircuit(x, y, z); // output is -12
                    ```

            -   backward，反向传播，计算偏导（决定了输入的更新）： -<

                :   ```javascript
                    // initial conditions
                    var x = -2, y = 5, z = -4;
                    var q = forwardAddGate(x, y); // q is 3
                    var f = forwardMultiplyGate(q, z); // output is -12

                    // gradient of the MULTIPLY gate with respect to its inputs
                    // wrt is short for "with respect to"
                    var derivative_f_wrt_z = q; // 3
                    var derivative_f_wrt_q = z; // -4

                    // derivative of the ADD gate with respect to its inputs
                    var derivative_q_wrt_x = 1.0;
                    var derivative_q_wrt_y = 1.0;

                    // chain rule
                    var derivative_f_wrt_x = derivative_q_wrt_x * derivative_f_wrt_q; // -4
                    var derivative_f_wrt_y = derivative_q_wrt_y * derivative_f_wrt_q; // -4
                    ```

            -   forward，根据反向传播得到的偏导，更新输入，再计算输出： -<

                :   ```javascript
                    // final gradient, from above: [-4, -4, 3]
                    var gradient_f_wrt_xyz = [derivative_f_wrt_x, derivative_f_wrt_y, derivative_f_wrt_z]

                    // let the inputs respond to the force/tug:
                    var step_size = 0.01;
                    x = x + step_size * derivative_f_wrt_x; // -2.04
                    y = y + step_size * derivative_f_wrt_y; // 4.96
                    z = z + step_size * derivative_f_wrt_z; // -3.97

                    // Our circuit now better give higher output:
                    var q = forwardAddGate(x, y); // q becomes 2.92
                    var f = forwardMultiplyGate(q, z); // output is -11.59, up from -12! Nice!
                    ```

                    发现确实输出值确实加大了。

            理解到了这里，你就明白了反向传播到底是在干嘛。

            小结。Lets recap once again what we learned:

            -   In the previous chapter we saw that in the case of a single
                gate (or a single expression), we can derive the analytic
                gradient using simple calculus. We interpreted the gradient
                as a force, or a tug on the inputs that pulls them in a
                direction which would make this gate’s output higher.
            -   In case of multiple gates everything stays pretty much the
                same way: every gate is hanging out by itself completely
                unaware of the circuit it is embedded in. Some inputs come
                in and the gate computes its output and the derivate with
                respect to the inputs. The only difference now is that
                suddenly, something can pull on this gate from above. That’
                s the gradient of the final circuit output value with
                respect to the ouput this gate computed. It is the circuit
                asking the gate to output higher or lower numbers, and with
                some force. The gate simply takes this force and multiplies
                it to all the forces it computed for its inputs before
                (chain rule). This has the desired effect:
            -   If a gate experiences a strong positive pull from above, it
                will also pull harder on its own inputs, scaled by the
                force it is experiencing from above
            -   And if it experiences a negative tug, this means that
                circuit wants its value to decrease not increase, so it
                will flip the force of the pull on its inputs to make its
                own output value smaller.

            >   A nice picture to have in mind is that as we pull on the
            >   circuit’s output value at the end, this induces pulls
            >   downward through the entire circuit, all the way down to
            >   the inputs.
            >
            >   就是说我们在输出端施加一个力，这个力能够返回去作用到电路的输入。

        Patterns in the "backward" flow -<

        :   说的就是 `+` 和 `*` 反向传播的规律。
            （对 `+` 而言，是把 sigma 直接分散回去；对 `*` 而言，是交换输入值。）

        Example: Single Neuron -<

        :   f(x,y,a,b,c) = σ(ax+by+c)。

            sigmoid 函数很符合显示规律，是一个 sigmoid 形状（"S" 形）。但 "S" 形的函数多了去，
            为什么要用 sigmoid = 1/(1+e^(-x))？因为这个函数很方便计算导数。
            而且，在神经网络中，不仅仅是 sigmoid 函数的导数是 sig'(x) = sig(x)(1-sig(x))，
            更是 sig(x) 在 forward 已经算过了！也就是说 sigmoid 函数求导数，计算任务的
            负担和 x(1-x) 一样……是不是很赞？！

            线路中每条线其实有两样数值于此相关，一个是 forward 时传递的输入值，一个是 backward 时
            反向传递的 gradients。
            我们先创建一个 Unit 单元来存储电路中的 wire 的 input value 和 weights：

            ```javascript
            // every Unit corresponds to a wire in the diagrams
            var Unit = function(value, grad) {
              // value computed in the forward pass
              this.value = value;
              // the derivative of circuit output w.r.t this unit, computed in backward pass
              this.grad = grad;
            }
            ```

            除了 unit 我们还要有一个 `+`，一个 `*` 和一个 `sig` (sigmoid)。

            -   multiplyGate -<

                :   ```javascript
                    var multiplyGate = function(){ };
                    multiplyGate.prototype = {
                      forward: function(u0, u1) {
                        // store pointers to input Units u0 and u1 and output unit utop
                        this.u0 = u0;
                        this.u1 = u1;
                        this.utop = new Unit(u0.value * u1.value, 0.0);
                        return this.utop;
                      },
                      backward: function() {
                        // take the gradient in output unit and chain it with the
                        // local gradients, which we derived for multiply gate before
                        // then write those gradients to those Units.
                        this.u0.grad += this.u1.value * this.utop.grad;
                        this.u1.grad += this.u0.value * this.utop.grad;
                      }
                    }
                    ```

            -   addGate -<

                :   ```javascript
                    var addGate = function(){ };
                    addGate.prototype = {
                      forward: function(u0, u1) {
                        this.u0 = u0;
                        this.u1 = u1; // store pointers to input units
                        this.utop = new Unit(u0.value + u1.value, 0.0);
                        return this.utop;
                      },
                      backward: function() {
                        // add gate. derivative wrt both inputs is 1
                        this.u0.grad += 1 * this.utop.grad;
                        this.u1.grad += 1 * this.utop.grad;
                      }
                    }
                    ```

            -   sigmoidGate -<

                :   ```javascript
                    var sigmoidGate = function() {
                        // helper function
                        this.sig = function(x) { return 1 / (1 + Math.exp(-x)); };
                    };
                    sigmoidGate.prototype = {
                        forward: function(u0) {
                            this.u0 = u0;
                            this.utop = new Unit(this.sig(this.u0.value), 0.0);
                            return this.utop;
                        },
                        backward: function() {
                            var s = this.sig(this.u0.value);
                            this.u0.grad += (s * (1 - s)) * this.utop.grad;
                        }
                    }
                    ```

            然后就可以拿来算了：

            -   forward -<

                :   ```javascript
                    // create input units
                    var a = new Unit(1.0, 0.0);
                    var b = new Unit(2.0, 0.0);
                    var c = new Unit(-3.0, 0.0);
                    var x = new Unit(-1.0, 0.0);
                    var y = new Unit(3.0, 0.0);

                    // create the gates
                    var mulg0 = new multiplyGate();
                    var mulg1 = new multiplyGate();
                    var addg0 = new addGate();
                    var addg1 = new addGate();
                    var sg0 = new sigmoidGate();

                    // do the forward pass
                    var forwardNeuron = function() {
                      ax = mulg0.forward(a, x); // a*x = -1
                      by = mulg1.forward(b, y); // b*y = 6
                      axpby = addg0.forward(ax, by); // a*x + b*y = 5
                      axpbypc = addg1.forward(axpby, c); // a*x + b*y + c = 2
                      s = sg0.forward(axpbypc); // sig(a*x + b*y + c) = 0.8808
                    };
                    forwardNeuron();

                    console.log('circuit output: ' + s.value); // prints 0.8808
                    ```

            -   backward -<

                :   ```javascript
                    s.grad = 1.0;
                    sg0.backward(); // writes gradient into axpbypc
                    addg1.backward(); // writes gradients into axpby and c
                    addg0.backward(); // writes gradients into ax and by
                    mulg1.backward(); // writes gradients into b and y
                    mulg0.backward(); // writes gradients into a and x
                    ```

            -   forward -<

                :   ```javascript
                    var step_size = 0.01;
                    a.value += step_size * a.grad; // a.grad is -0.105
                    b.value += step_size * b.grad; // b.grad is 0.315
                    c.value += step_size * c.grad; // c.grad is 0.105
                    x.value += step_size * x.grad; // x.grad is 0.105
                    y.value += step_size * y.grad; // y.grad is 0.210

                    forwardNeuron();
                    console.log('circuit output after one backprop: ' + s.value); // prints 0.8825
                    ```

                    我们还可以检验一下 bp 算出来的 grad 是否正确，

                    :   ```javascript
                        var forwardCircuitFast = function(a,b,c,x,y) {
                          return 1/(1 + Math.exp( - (a*x + b*y + c)));
                        };
                        var a = 1, b = 2, c = -3, x = -1, y = 3;
                        var h = 0.0001;
                        var a_grad = (forwardCircuitFast(a+h,b,c,x,y) - forwardCircuitFast(a,b,c,x,y))/h;
                        var b_grad = (forwardCircuitFast(a,b+h,c,x,y) - forwardCircuitFast(a,b,c,x,y))/h;
                        var c_grad = (forwardCircuitFast(a,b,c+h,x,y) - forwardCircuitFast(a,b,c,x,y))/h;
                        var x_grad = (forwardCircuitFast(a,b,c,x+h,y) - forwardCircuitFast(a,b,c,x,y))/h;
                        var y_grad = (forwardCircuitFast(a,b,c,x,y+h) - forwardCircuitFast(a,b,c,x,y))/h;
                        ```

        Becoming a Backprop Ninja -<

        :   ```javascript
            // 这种情况是简单的
            var x = a + b + c;
            var da = 1.0 * dx; var db = 1.0 * dx; var dc = 1.0 * dx;

            // 这种情况呢？
            var x = a * a;
            var da = //???

            // 可以做如下考虑
            var da = a * dx; // gradient into a from first branch
            da += a * dx; // and add on the gradient from the second branch

            // short form instead is:
            var da = 2 * a * dx;
            ```

            还有更难的例子。

            还有，ReLU 呢？

            ```javascript
            var x = Math.max(a, 0)
            // backprop through this gate will then be:
            var da = a > 0 ? 1.0 * dx : 0.0;
            ```

            >   “Maybe this is not immediately obvious, but this machinery is a
            >   powerful hammer for Machine Learning.”

-   Chapter 2: Machine Learning
