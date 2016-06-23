Theano features: +<

  - **tight integration with NumPy** – Use numpy.ndarray in Theano-compiled functions.
  - **transparent use of a GPU** – Perform data-intensive calculations up to 140x faster than with CPU.(float32 only)
  - **efficient symbolic differentiation** – Theano does your derivatives for function with one or many inputs.
  - speed and stability optimizations – Get the right answer for log(1+x) even when x is really tiny.
  - **dynamic C code generation** – Evaluate expressions faster.
  - extensive unit-testing and self-verification – Detect and diagnose many types of errors.

Theano has been powering large-scale computationally intensive scientific
investigations **since 2007**. But it is also approachable enough to be used in
the classroom (University of Montreal’s deep learning/machine learning
classes). -<

-   You should learn some python. ^[[Tutorial — Theano 0.8.0 documentation](http://deeplearning.net/software/theano/tutorial/).]

-   Matrix **conventions** for machine learning ^[see [NumPy refresher —
    Theano 0.8.0 documentation](http://deeplearning.net/software/theano/tutorial/numpy.html#broadcasting).]

    +   Every row is an example.

    +   numpy, `numpyarray.shape()`, `arr[ r, c ]`

        ```python
        >>> numpy.asarray([[1., 2], [3, 4], [5, 6]])
        array([[ 1.,  2.],
               [ 3.,  4.],
               [ 5.,  6.]])
        >>> numpy.asarray([[1., 2], [3, 4], [5, 6]]).shape
        (3, 2)

        # get entry value
        >>> numpy.asarray([[1., 2], [3, 4], [5, 6]])[2, 0]
        5.0
        ```

    +   broadcasting (cast as in `static_cast`, `const_cast`)

        ```python
        >>> a = numpy.asarray([1.0, 2.0, 3.0])
        >>> b = 2.0
        >>> a * b # broadcasting b (a 0-d array) to same size of a
        array([ 2.,  4.,  6.])
        ```

        see more at [numpy user guide: basics broadcasting](http://docs.scipy.org/doc/numpy/user/basics.broadcasting.html).

-   Basics +<

    +   Baby Steps - Algebra -<

        *   Adding two Scalars

            ```python
            >>> import numpy
            >>> import theano.tensor as T
            >>> from theano import function

            >>> x = T.dscalar('x')
            >>> y = T.dscalar('y')

                #    about type
                #    In Theano, all symbols must be **typed**
                #
                #        d         :   double
                #        dscalar   :   0-dim arrays (scalar) of doubles (d)
                #
                >>> type(x)
                <class 'theano.tensor.var.TensorVariable'>
                >>> x.type
                TensorType(float64, scalar)
                >>> T.dscalar
                TensorType(float64, scalar)
                >>> x.type is T.dscalar
                True

            >>> z = x + y

                >>> from theano import pp # pretty print
                >>> print(pp(z))
                (x + y)

                    # powerful python `eval`
                    >>> z.eval({x : 16.3, y : 12.1}) # value assignment

            >>> f = function([x, y], z)

                # f: function(input, output)

            >>> f(2, 3)         # f([2,3]), [2,3] as the input
            array(5.0)
            >>> numpy.allclose(f(16.3, 12.1), 28.4)
            True
            ```

        *   Adding two Matrices

            ```python
            >>> x = T.dmatrix('x')
            >>> y = T.dmatrix('y')
            >>> z = x + y
            >>> f = function([x, y], z)

                # matrix addition (version 1: python native, version 2: numpy)

                >>> f([[1, 2], [3, 4]], [[10, 20], [30, 40]])
                array([[ 11.,  22.],
                       [ 33.,  44.]])

                >>> import numpy
                >>> f(numpy.array([[1, 2], [3, 4]]), numpy.array([[10, 20], [30, 40]]))
                array([[ 11.,  22.],
                       [ 33.,  44.]])
            ```

        *   Notes

            The following types are available: -<

              - scalar, vector, matrix, row, col, tensor3, tensor4
              - b: byte
              - w: word (16-bit integer)
              - i: int (32-bit)
              - l: long int (64-bit)
              - f: float (32-bit)
              - d: double (64-bit)
              - c: complex

        *   Exercise

            ```python
            >>> import theano
            >>> a = theano.tensor.vector()          # declare variable
            >>> out = a + a ** 10                   # build symbolic expression
            >>> f = theano.function([a], out)       # compile function
            >>> print(f([0, 1, 2]))
            [    0.     2.  1026.]
            ```

            Modify and execute this code to compute this expression:
            `a ** 2 + b ** 2 + 2 * a * b`.

            ```python
            from __future__ import absolute_import, print_function, division
            import theano
            a = theano.tensor.vector()              # declare variable
            b = theano.tensor.vector()  # declare variable
            out = a ** 2 + b ** 2 + 2 * a * b       # build symbolic expression
            f = theano.function([a, b], out)        # compile function
            print(f([1, 2], [4, 5]))                # prints [ 25.  49.]
            ```

    +   refs and see also

        *    [Basic Tensor Functionality — Theano 0.8.0 documentation](http://deeplearning.net/software/theano/library/tensor/basic.html#libdoc-basic-tensor)

    +   More Examples -<

        *   Logistic Function

            **erf, g(x) = 1/(1+e^(-x)) = (1+tanh(x/2))/2**

            ```python
            >>> import theano
            >>> import theano.tensor as T
            >>> x = T.dmatrix('x')
            >>> s = 1 / (1 + T.exp(-x))
            >>> logistic = theano.function([x], s)
            >>> logistic([[0, 1], [-1, -2]])
            array([[ 0.5       ,  0.73105858],
                   [ 0.26894142,  0.11920292]])

            ```

        *   Computing More than one Thing at the Same Time

            ```python
            >>> a, b = T.dmatrices('a', 'b')        # 注意这里: matrix->matrices
            >>> diff = a - b
            >>> abs_diff = abs(diff)
            >>> diff_squared = diff**2
            >>> f = theano.function([a, b], [diff, abs_diff, diff_squared])
            ```

        *   Setting a Default Value for an Argument

            ```python
            >>> from theano import In
            >>> from theano import function
            >>> x, y = T.dscalars('x', 'y')
            >>> z = x + y
            >>> f = function([x, In(y, value=1)], z)    # default value of y is 1
            >>> f(33)
            array(34.0)
            >>> f(33, 2)
            array(35.0)

            # These parameters can be set positionally or by name, as in
            # standard Python
            >>> x, y, w = T.dscalars('x', 'y', 'w')
            >>> z = (x + y) * w
            >>> f = function([x, In(y, value=1), In(w, value=2, name='w_by_name')], z)
            >>> f(33)
            array(68.0)
            >>> f(33, 2)
            array(70.0)
            >>> f(33, 0, 1)
            array(33.0)
            >>> f(33, w_by_name=1)
            array(34.0)
            >>> f(33, w_by_name=1, y=0)
            array(33.0)
            ```

        *   Using Shared Variables

            ```python
            >>> from theano import shared
            >>> state = shared(0)           # shared value, like `static' in c?
            >>> inc = T.iscalar('inc')
            #                               return cur state
            >>> accumulator = function([inc], state, updates=[(state, state+inc)])

                # get
                >>> print(state.get_value())
                0
                >>> accumulator(1)
                array(0)
                >>> print(state.get_value())
                1
                >>> accumulator(300)
                array(1)
                >>> print(state.get_value())
                301

                # set
                >>> state.set_value(-1)
                >>> accumulator(3)
                array(-1)
                >>> print(state.get_value())
                2
            ```

        *   Copying functions

            ```python
            >>> new_state = theano.shared(0)
            >>> new_accumulator = accumulator.copy(swap={state:new_state})
            >>> new_accumulator(100)
            [array(0)]
            >>> print(new_state.get_value())
            100
            ```

        *   Using Random Numbers

            -   Brief Example

                ```python
                from theano.tensor.shared_randomstreams import RandomStreams
                from theano import function
                srng = RandomStreams(seed=234)

                # 别忘了，rv: random variable

                # a random stream of 2x2 matrices of draws from a uniform distribution
                rv_u = srng.uniform((2,2))
                #                                                  normal distribution
                rv_n = srng.normal((2,2))

                f = function([], rv_u)              # no input, just grab out streamed value
                g = function([], rv_n, no_default_updates=True)    # Not updating rv_n.rng

                    # deps on update or not
                    >>> f() != f() # different numbers from f_val0
                    >>> g() != g() # same number everytime

                nearly_zeros = function([], rv_u + rv_u - 2 * rv_u)

                    # 这个特性的好处是，不用把这个 generate 的值存起来
                    # 不好在于，如果你希望它不一样，就得分别 generate 再运算
                ```

            -   Seeding Streams

                ```python
                >>> rng_val = rv_u.rng.get_value(borrow=True)   # Get the rng for rv_u
                >>> rng_val.seed(89234)                         # seeds the generator
                >>> rv_u.rng.set_value(rng_val, borrow=True)    # Assign back seeded rng
                ```

            -   Sharing Streams Between Functions
            -   Copying Random State Between Theano Graphs
            -   Other Random Distributions
            -   Other Implementations

                TODO: <http://deeplearning.net/software/theano/tutorial/examples.html#using-random-numbers>

        *   A Real Example: Logistic Regression

            先看看 numpy 提供的一些 rand 函数：

            -   `numpy.random.rand(d0, d1, ..., dn)`, uniform distribubition, `[0, 1)`

            -   `numpy.random.randint(low, high=None, size=None)`,
                descrete uniform distrib, `[low, high)`

                ```python
                >>> np.random.randint(2, size=10)
                array([1, 0, 0, 0, 1, 1, 0, 0, 1, 0])
                >>> np.random.randint(1, size=10)
                array([0, 0, 0, 0, 0, 0, 0, 0, 0, 0])

                >>> np.random.randint(5, size=(2, 4))
                array([[4, 0, 2, 1],
                       [3, 2, 2, 0]])
                ```

                当没 high 的时候，其实 low 是 high，0 是 low……这 api 也太恶心了。

                其实可以写成两个 api:

                  - numpy.random.randint(high, size=None), `[0, high)`
                  - numpy.random.randint(low, high, size=None), `[low, high)`

                可能因为这个接口太恶心……下面的代码用的是 `low=..., high=...`.

            -   `numpy.random.randn(d0, d1, ..., dn)`, normal distrib,
                正态分布，返回多维数组。
                **dims: d0, d1, ..., dn**.


                ```python
                >>> np.random.randn()
                2.1923875335537315 #random

                #  N(3, 6.25=2.5^2) (you can use: sigma * np.random.randn(...) + mu)
                >>> 2.5 * np.random.randn(2, 4) + 3
                array([[-4.49401501,  4.00950034, -1.81814867,  7.29718677],  #random
                       [ 0.39924804,  4.68456316,  4.99394529,  4.84057254]]) #random
                ```

            w.r.t.
              - with respect to
              - with regard to

            ```python
            import numpy
            import theano
            import theano.tensor as T
            rng = numpy.random

            N = 400                                   # training sample size
            feats = 784                               # number of input variables

            # generate a dataset: D = (input_values, target_class)
            #
            #   input:             [N, feats] of N(0, 1),
            #   output:            [0, 2) -> 0/1 (binary)
            #
            D = (rng.randn(N, feats), rng.randint(size=N, low=0, high=2))

            training_steps = 10000

            # Declare Theano symbolic variables
            x = T.matrix("x")
            y = T.vector("y")

            # initialize the weight vector w randomly
            #
            #   this and the following bias variable b are shared so they
            #   keep their values between training iterations (updates)
            #
            w = theano.shared(rng.randn(feats), name="w")

            # initialize the bias term
            b = theano.shared(0., name="b")

            print("Initial model:")
            print(w.get_value())
            print(b.get_value())

            # Construct Theano expression graph
            p_1 = 1 / (1 + T.exp(-T.dot(x, w) - b))   # Probability that target = 1
            prediction = p_1 > 0.5                    # The prediction thresholded

            # Cross-entropy loss function
            xent = -y * T.log(p_1) - (1-y) * T.log(1-p_1)
            # The cost to minimize
            cost = xent.mean() + 0.01 * (w ** 2).sum()
            gw, gb = T.grad(cost, [w, b])             # Compute the gradient of the cost

            # w.r.t weight vector w and
            # bias term b
            # (we shall return to this in a
            # following section of this tutorial)

            #                                                    「train 函数」
            train = theano.function(
                      # Compile, 这部分很有意思，直接用了 input，output 和 updates
                      inputs=[x,y],
                      outputs=[prediction, xent],     # 两个定义好的 descrimination func
                      # pairwise update, ((old1, new1), (old2, new2), ...)
                      updates=((w, w - 0.1 * gw), (b, b - 0.1 * gb)))

            # TODO1

            #                                                    「predict 函数」
            predict = theano.function(inputs=[x], outputs=prediction)

            # Train
            for i in range(training_steps):     # loop 10000 times
                pred, err = train(D, D)   # 数据集，样本: D, label: D

            print("Final model:")
            print(w.get_value())
            print(b.get_value())
            print("target values for D:")
            print(D)
            print("prediction on D:")
            print(predict(D))
            ```

            `updates` (iterable over pairs `(shared_variable, new_expression)`.
            List, tuple or dict.) – expressions for new SharedVariable values.

            refs and see also

              - [function - defines theano.function — Theano 0.8.0 documentation](http://deeplearning.net/software/theano/library/compile/function.html#function.function)

    +   Derivatives in Theano ^[[Derivatives in Theano — Theano 0.8.0 documentation](http://deeplearning.net/software/theano/tutorial/gradients.html).] -<

        *   Computing Gradients

            ```python
            >>> import numpy
            >>> import theano
            >>> import theano.tensor as T
            >>> from theano import pp
            >>> x = T.dscalar('x')
            >>> y = x ** 2
            >>> gy = T.grad(y, x)
            # TODO? 看不懂这个 output
            >>> pp(gy)  # print out the gradient prior to optimization
            '((fill((x ** TensorConstant{2}), TensorConstant{1.0}) * TensorConstant{2}) * (x ** (TensorConstant{2} - TensorConstant{1})))'
            >>> f = theano.function([x], gy)
            >>> f(4)
            array(8.0)
            >>> numpy.allclose(f(94.2), 188.4)
            True
            ```

            ```python
            >>> x = T.dmatrix('x')
            >>> s = T.sum(1 / (1 + T.exp(-x)))      # x is a matrix!
            >>> gs = T.grad(s, x)
            >>> dlogistic = theano.function([x], gs)
            >>> dlogistic([[0, 1], [-1, -2]])
            array([[ 0.25      ,  0.19661193],
                   [ 0.19661193,  0.10499359]])
            ```

        *   Computing the Jacobian ??

            ```python
            >>> import theano
            >>> import theano.tensor as T
            >>> x = T.dvector('x')
            >>> y = x ** 2
            >>> J, updates = theano.scan( lambda i, y,x : T.grad(y[i], x),
                                          sequences=T.arange(y.shape),
                                          non_sequences=[y,x] )

                # scan automatically concatenates all these rows, generating a
                # matrix which corresponds to the Jacobian

            >>> f = theano.function([x], J, updates=updates)
            >>> f([4, 4])
            array([[ 8.,  0.],
                   [ 0.,  8.]])
            ```

        *   Computing the Hessian

            The Hessian matrix can be considered related to the Jacobian
            matrix by $H(f)(x)=J(∇f)(x)H(f)(x)=J(∇f)(x)$.

            ```python
            >>> x = T.dvector('x')
            >>> y = x ** 2
            >>> cost = y.sum()
            >>> gy = T.grad(cost, x)
            >>> H, updates = theano.scan( lambda i, gy,x : T.grad(gy[i], x),
                                          sequences=T.arange(gy.shape),
                                          non_sequences=[gy, x] )
            >>> f = theano.function([x], H, updates=updates)
            >>> f([4, 4])
            array([[ 2.,  0.],
                   [ 0.,  2.]])
            ```

        *   Jacobian times a Vector

            Compared to evaluating the Jacobian and then doing the product,
            there are methods that compute the desired results while avoiding
            actual evaluation of the Jacobian. This can bring about significant
            performance gains. A description of one such algorithm can be found
            here:

            | Barak A. Pearlmutter,
            | *“Fast Exact Multiplication by the Hessian”*,
            | Neural Computation, 1994

            -   R-operator

                The R operator is built to evaluate the product between a
                Jacobian and a vector, namely $\frac{\partial f(x)}{\partial x} v$.

                The formulation can be extended even for x being a matrix, or a
                tensor in general, case in which also the Jacobian becomes a
                tensor and the product becomes some kind of tensor product.
                Because in practice we end up needing to compute such
                expressions in terms of weight matrices, Theano supports this
                more generic form of the operation. In order to evaluate the
                R-operation of expression y, with respect to x, multiplying the
                Jacobian with v you need to do something similar to this:

                ```python
                >>> W = T.dmatrix('W')
                >>> V = T.dmatrix('V')
                >>> x = T.dvector('x')
                >>> y = T.dot(x, W)
                >>> JV = T.Rop(y, W, V)
                >>> f = theano.function([W, V, x], JV)
                >>> f([[1, 1], [1, 1]], [[2, 2], [2, 2]], [0,1])
                array([ 2.,  2.])
                ```

            -   L-operator

                In similitude to the R-operator, the L-operator would compute a
                row vector times the Jacobian. The mathematical formula would
                be v \frac{\partial f(x)}{\partial x}. The L-operator is also
                supported for generic tensors (not only for vectors).
                Similarly, it can be implemented as follows:

                similitude, `[sɪ'mɪlɪtju:d]`, n.相似；类似；相仿

                ```python
                >>> W = T.dmatrix('W')
                >>> v = T.dvector('v')
                >>> x = T.dvector('x')
                >>> y = T.dot(x, W)
                >>> VJ = T.Lop(y, W, v)
                >>> f = theano.function([v,x], VJ)
                >>> f([2, 2], [0, 1])
                array([[ 0.,  0.],
                       [ 2.,  2.]])
                ```

            -   v, the point of evaluation

                differs between the L-operator and the R-operator.

        *   Hessian times a Vector

            ```python
            >>> x = T.dvector('x')
            >>> v = T.dvector('v')
            >>> y = T.sum(x ** 2)
            >>> gy = T.grad(y, x)
            >>> vH = T.grad(T.sum(gy * v), x)
            >>> f = theano.function([x, v], vH)
            >>> f([4, 4], [2, 2])
            array([ 4.,  4.])

            # or, making use of the R-operator:
            >>> x = T.dvector('x')
            >>> v = T.dvector('v')
            >>> y = T.sum(x ** 2)
            >>> gy = T.grad(y, x)
            >>> Hv = T.Rop(gy, x, v)
            >>> f = theano.function([x, v], Hv)
            >>> f([4, 4], [2, 2])
            array([ 4.,  4.])
            ```

        *   Final Pointers

            -   The grad function works symbolically: it receives and returns
                Theano variables.
            -   grad can be compared to a macro since it can be applied
                repeatedly.
            -   Scalar costs only can be directly handled by grad. Arrays are
                handled through repeated applications.
            -   Built-in functions allow to compute efficiently vector times
                Jacobian and vector times Hessian.
            -   Work is in progress on the optimizations required to compute
                efficiently the full Jacobian and the Hessian matrix as well as
                the Jacobian times vector.

    +   Conditions ^[[Conditions — Theano 0.8.0 documentation](http://deeplearning.net/software/theano/tutorial/conditions.html).] -<

        *   IfElse vs Switch

            -   ifelse, binary, lazy
            -   switch, more general

            ```python
            from theano import tensor as T
            from theano.ifelse import ifelse
            import theano, time, numpy

            a,b = T.scalars('a', 'b')
            x,y = T.matrices('x', 'y')

            z_switch = T.switch(T.lt(a, b), T.mean(x), T.mean(y))
            z_lazy = ifelse(T.lt(a, b), T.mean(x), T.mean(y))

            f_switch = theano.function([a, b, x, y], z_switch,
                                       mode=theano.Mode(linker='vm'))
            f_lazyifelse = theano.function([a, b, x, y], z_lazy,
                                           mode=theano.Mode(linker='vm'))

            val1 = 0.
            val2 = 1.
            big_mat1 = numpy.ones((10000, 1000))
            big_mat2 = numpy.ones((10000, 1000))

            n_times = 10

            tic = time.clock()
            for i in range(n_times):
                f_switch(val1, val2, big_mat1, big_mat2)
            print('time spent evaluating both values %f sec' % (time.clock() - tic))

            tic = time.clock()
            for i in range(n_times):
                f_lazyifelse(val1, val2, big_mat1, big_mat2)    # faster
            print('time spent evaluating one value %f sec' % (time.clock() - tic))
            ```

            There is no automatic optimization replacing a switch with a
            broadcasted scalar to an ifelse, as this is not always faster.

    +   Loop -<

        *   Scan

            what is scan, scan vs for loop

            -   scan, recurrence, for looping
            -   reduction, map are scans
            -   scan is more than loop, and faster
            -   can alse computes gradients through sequential steps
            -   lower memory usage

            examples

            -   Scan Example:

                **Computing the sequence x(t) = tanh(x(t - 1).dot(W) + y(t).dot(U) + p(T - t).dot(V))**

                ```python
                import theano
                import theano.tensor as T
                import numpy as np

                # define tensor variables
                X = T.vector("X")
                W = T.matrix("W")
                b_sym = T.vector("b_sym")
                U = T.matrix("U")
                Y = T.matrix("Y")
                V = T.matrix("V")
                P = T.matrix("P")

                results, updates = theano.scan(lambda y, p, x_tm1: T.tanh(T.dot(x_tm1, W) + T.dot(y, U) + T.dot(p, V)),
                          sequences=[Y, P[::-1]], outputs_info=[X])
                compute_seq = theano.function(inputs=[X, W, Y, U, P, V], outputs=results)

                # test values
                x = np.zeros((2), dtype=theano.config.floatX)
                x = 1
                w = np.ones((2, 2), dtype=theano.config.floatX)
                y = np.ones((5, 2), dtype=theano.config.floatX)
                y[0, :] = -3
                u = np.ones((2, 2), dtype=theano.config.floatX)
                p = np.ones((5, 2), dtype=theano.config.floatX)
                p[0, :] = 3
                v = np.ones((2, 2), dtype=theano.config.floatX)

                print(compute_seq(x, w, y, u, p, v))

                # comparison with numpy
                x_res = np.zeros((5, 2), dtype=theano.config.floatX)
                x_res = np.tanh(x.dot(w) + y.dot(u) + p.dot(v))
                for i in range(1, 5):
                    x_res[i] = np.tanh(x_res[i - 1].dot(w) + y[i].dot(u) + p[4-i].dot(v))
                print(x_res)

                [[-0.99505475 -0.99505475]
                 [ 0.96471973  0.96471973]
                 [ 0.99998585  0.99998585]
                 [ 0.99998771  0.99998771]
                 [ 1.          1.        ]]
                [[-0.99505475 -0.99505475]
                 [ 0.96471973  0.96471973]
                 [ 0.99998585  0.99998585]
                 [ 0.99998771  0.99998771]
                 [ 1.          1.        ]]
                ```

            -   Scan Example: Computing norms of lines of X

            -   Scan Example: Computing norms of columns of X

            -   Scan Example: Computing trace of X

            -   Scan Example: Computing the sequence x(t) = x(t - 2).dot(U) + x(t - 1).dot(V) + tanh(x(t - 1).dot(W) + b)

            -   Scan Example: Computing the Jacobian of y = tanh(v.dot(A)) wrt x

            -   Scan Example: Accumulate number of loop during a scan

            -   Scan Example: Computing tanh(v.dot(W) + b) * d where d is binomial

            -   Scan Example: Computing pow(A, k)

            -   Scan Example: Calculating a Polynomial

        *   Exercise

    +   How Shape Information is Handled by Theano

        1) shape is known in advance;

        2) know only the shape, not the actual value of a variable. (This is done with the `Op.infer_shape` method.)

        *   Shape Inference Problem

            ```python
            >>> import theano
            >>> x = theano.tensor.matrix('x')
            >>> f = theano.function([x], (x ** 2).shape)
            >>> theano.printing.debugprint(f)
            MakeVector{dtype='int64'} [id A] ''   2
             |Shape_i{0} [id B] ''   1
             | |x [id C]
             |Shape_i{1} [id D] ''   0
               |x [id C]
            ```

            这种图的说明见 [printing – Graph Printing and Symbolic Print Statement](#theano-graph-printing).

        *   Specifing Exact Shape

            **1**

            ```python
            #             convolution 2dim
            theano.tensor.nnet.conv2d( ...,
                                       image_shape=(7, 3, 5, 5),
                                       filter_shape=(2, 3, 4, 4) )
            ```

            `signal.conv.conv2d` performs a basic 2D convolution of the input
            with the given filters. The input parameter can be a single 2D
            image or a 3D tensor, containing a set of images. Similarly,
            filters can be a single 2D filter or a 3D tensor, corresponding
            to a set of 2D filters.

            Shape parameters are optional and will result in faster execution.

            ```python
            theano.tensor.nnet.conv.conv2d( input, filters,
                                            image_shape=None,
                                            filter_shape=None,
                                            border_mode='valid',
                                            subsample=(1, 1),
                                            **kargs )
            ```

            Deprecated, old conv2d interface. This function will build the
            symbolic graph for convolving a stack of input images with a
            set of filters. The implementation is modelled after
            Convolutional Neural Networks (CNN). It is simply a wrapper to
            the ConvOp but provides a much cleaner interface.

            **2**

            ```python
            >>> import theano
            >>> x = theano.tensor.matrix()
            >>> x_specify_shape = theano.tensor.specify_shape(x, (2, 2))
            >>> f = theano.function([x], (x_specify_shape ** 2).shape)
            >>> theano.printing.debugprint(f)
            DeepCopyOp [id A] ''   0
             |TensorConstant{(2,) of 2} [id B]
            ```

        *   Future Plans

            nil.

-   Advanced -<

    +   Sparse -<

        *   Compressed Sparse Format

            -   Which format should I use?

        *   Handling Sparse in Theano

            -   To and Fro
            -   Properties and Construction
            -   Structured Operation
            -   Gradient

    +   Using the GPU -<

        *   CUDA backend

            -   Testing Theano with GPU
            -   Returning a Handle to Device-Allocated Data
            -   What Can Be Accelerated on the GPU
            -   Tips for Improving Performance on GPU
            -   GPU Async capabilities
            -   Changing the Value of Shared Variables

                +   Exercise

        *   GpuArray Backend

            -   Testing Theano with GPU
            -   Returning a Handle to Device-Allocated Data
            -   What Can be Accelerated on the GPU
            -   GPU Async Capabilities

        *   Software for Directly Programming a GPU
        *   Learning to Program with PyCUDA

            -   Exercise
            -   Exercise

        *   Note

    +   Using multiple GPUs -<

        *   Defining the context map
        *   A simple graph on two GPUs
        *   Explicit transfers of data

refs and see also

- [Python Memory Management — Theano 0.8.0 documentation](http://deeplearning.net/software/theano/tutorial/python-memory-management.html#python-memory-management)
- [LSTM Networks for Sentiment Analysis — DeepLearning 0.1 documentation](http://www.deeplearning.net/tutorial/lstm.html)

printing – Graph Printing and Symbolic Print Statement `@`{.tzx-anchor #theano-graph-printing} -<

:   友好的打印结果：

```python
>>> theano.printing.pprint(prediction)
'gt((TensorConstant{1} / (TensorConstant{1} + exp(((-(x \\dot w)) - b)))),
TensorConstant{0.5})'
```

调试打印

```python
>>> theano.printing.debugprint(prediction)
    Elemwise{gt,no_inplace} [@A] ''
    |Elemwise{true_div,no_inplace} [@B] ''
    | |DimShuffle{x} [@C] ''
    | | |TensorConstant{1} [@D]
    | |Elemwise{add,no_inplace} [@E] ''
    |   |DimShuffle{x} [@F] ''
    |   | |TensorConstant{1} [@D]
    |   |Elemwise{exp,no_inplace} [@G] ''
    |     |Elemwise{sub,no_inplace} [@H] ''
    |       |Elemwise{neg,no_inplace} [@I] ''
    |       | |dot [@J] ''
    |       |   |x [@K]
    |       |   |w [@L]
    |       |DimShuffle{x} [@M] ''
    |         |b [@N]
    |DimShuffle{x} [@O] ''
      |TensorConstant{0.5} [@P]
```

```python
>>> theano.printing.debugprint(predict)
    Elemwise{Composite{GT(scalar_sigmoid((-((-i0) - i1))), i2)}} [@A] ''   4
     |CGemv{inplace} [@B] ''   3
     | |Alloc [@C] ''   2
     | | |TensorConstant{0.0} [@D]
     | | |Shape_i{0} [@E] ''   1
     | |   |x [@F]
     | |TensorConstant{1.0} [@G]
     | |x [@F]
     | |w [@H]
     | |TensorConstant{0.0} [@D]
     |InplaceDimShuffle{x} [@I] ''   0
     | |b [@J]
     |TensorConstant{(1,) of 0.5} [@K]
```

graph的图片打印

```python
>>> theano.printing.pydotprint(prediction, outfile="pics/logreg_pydotprint_prediction.png", var_with_name_simple=True)
The output file is available at pics/logreg_pydotprint_prediction.png
```

![](http://deeplearning.net/software/theano/_images/logreg_pydotprint_prediction2.png)

refs and see also

  - [Theano2.1.5-基础知识之打印出theano的图 - 仙守 - 博客园](http://www.cnblogs.com/shouhuxianjian/p/4590231.html)
  - [Printing/Drawing Theano graphs — Theano 0.8.0 documentation](http://deeplearning.net/software/theano/tutorial/printing_drawing.html)
  - [printing – Graph Printing and Symbolic Print Statement — Theano 0.8.0 documentation](http://deeplearning.net/software/theano/library/printing.html#libdoc-printing)
