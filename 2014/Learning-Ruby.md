Learing Ruby
============


what is ruby and some miscs
---------------------------

- [Ruby is...][what-ruby-is]
    - A dynamic, open source programming language with a focus on simplicity and productivity. It has an elegant syntax that is natural to read and easy to write.
- Documentation
    - [Try Ruby in 15 minutes][try-ruby]: fun, but the web site works slowly. see [here][terrible-try-ruby]
    - [Ruby Koans][ruby-koans]
    - [Ruby in Twenty Minutes][ruby-in-20-mins]


[what-ruby-is]: https://www.ruby-lang.org/en/
[try-ruby]: http://tryruby.org/levels/1/challenges/0
[ruby-koans]: http://rubykoans.com/
[ruby-in-20-mins]: https://www.ruby-lang.org/en/documentation/quickstart/
[terrible-try-ruby]: http://gnat-tang-shared-image.qiniudn.com/201404-terrible-try-ruby.png




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

5. Evoling into a greater

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
g = Greeter.new("Gnat")
g.say_hi
g.say_bye
g.instance_methods
g.instance_methods(false)
g.respond_to?("name") # ==> false
g.respond_to?("say_hi") # ==> true
g.respond_to?("to_s") # ==> true
=> true
```

6. A Better One
```
#!/usr/bin/env ruby

class MegaGreeter
  attr_accessor :names

  # Create the object
  def initialize(names = "World")
    @names = names
  end

  # Say hi to everybody
  def say_hi
    if @names.nil?
      puts "..."
    elsif @names.respond_to?("each")
      # @names is a list of some kind, iterate!
      @names.each do |name|
        puts "Hello #{name}!"
      end
    else
      puts "Hello #{@names}!"
    end
  end

  # Say bye to everybody
  def say_bye
    if @names.nil?
      puts "..."
    elsif @names.respond_to?("join")
      # Join the list elements with commas
      puts "Goodbye #{@names.join(", ")}.  Come back soon!"
    else
      puts "Goodbye #{@names}.  Come back soon!"
    end
  end

end


if __FILE__ == $0
  mg = MegaGreeter.new
  mg.say_hi
  mg.say_bye

  # Change name to be "Zeke"
  mg.names = "Zeke"
  mg.say_hi
  mg.say_bye

  # Change the name to an array of names
  mg.names = ["Albert", "Brenda", "Charles",
    "Dave", "Engelbert"]
  mg.say_hi
  mg.say_bye

  # Change to nil
  mg.names = nil
  mg.say_hi
  mg.say_bye
end
```