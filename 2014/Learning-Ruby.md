Learing Ruby
============


what is ruby and some miscs
------------

- [Ruby is...][what-ruby-is]
    - A dynamic, open source programming language with a focus on simplicity and productivity. It has an elegant syntax that is natural to read and easy to write.
- Documentation
    - [Try Ruby in 15 minutes][try-ruby]
    - [Ruby Koans][ruby-koans]
    - [Ruby in Twenty Minutes][ruby-in-20-mins]


[what-ruby-is]: https://www.ruby-lang.org/en/
[try-ruby]: http://tryruby.org/levels/1/challenges/0
[ruby-koans]: http://rubykoans.com/
[ruby-in-20-mins]: https://www.ruby-lang.org/en/documentation/quickstart/



Ruby in 20 Minutes
------------------

1. Run `irb` in your shell

2. Simple Examples
```
"hello world"
puts "hello world"
3 + 2
3 * 2
3 ** 2
Math.sqrt(9)
```
  
3. Modules Group Code by Topic
 - `Math`: built-in module, contains `sin()`, `cos()`, etc

4. Defs
 - first ruby function
```
def h
puts "Hello World!"
end
h
h()
```
 - second ruby function
```
def h(name = "GNAT")
puts "Hello #{name.capitalize}"
end
h("gnat")
```

- evoling into a greater

```
class Greeter
  def initialize(name = "World")
    @name = name
  end
  def say_hi
    puts "Hi #{@name}!"
  end
  def say_bye
    puts "Bye #{@name}, come back soon."
  end
end
```