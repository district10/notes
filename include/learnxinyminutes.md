Java -<

:   ```java
    // Single-line comments start with //

    /*
    Multi-line comments look like this.
    */

    /**
     * JavaDoc comments look like this. Used to describe the Class or various
     * attributes of a Class.
     * Main attributes:
     *
     * @author      Name (and contact information such as email) of author(s).
     * @version     Current version of the program.
     * @since       When this part of the program was first added.
     * @param       For describing the different parameters for a method.
     * @return      For describing what the method returns.
     * @deprecated  For showing the code is outdated or shouldn't be used.
     * @see         Links to another part of documentation.
    */

    // Import ArrayList class inside of the java.util package
    import java.util.ArrayList;
    // Import all classes inside of java.security package
    import java.security.*;

    // Each .java file contains one outer-level public class, with the same name
    // as the file.
    public class LearnJava {

        // In order to run a java program, it must have a main method as an entry
        // point.
        public static void main (String[] args) {

            // Use System.out.println() to print lines.
            System.out.println("Hello World!");
            System.out.println(
                "Integer: " + 10 +
                " Double: " + 3.14 +
                " Boolean: " + true);

            // To print without a newline, use System.out.print().
            System.out.print("Hello ");
            System.out.print("World");

            // Use System.out.printf() for easy formatted printing.
            System.out.printf("pi = %.5f", Math.PI); // => pi = 3.14159

            ///////////////////////////////////////
            // Variables
            ///////////////////////////////////////

            /*
            *  Variable Declaration
            */
            // Declare a variable using <type> <name>
            int fooInt;
            // Declare multiple variables of the same
            // type <type> <name1>, <name2>, <name3>
            int fooInt1, fooInt2, fooInt3;

            /*
            *  Variable Initialization
            */

            // Initialize a variable using <type> <name> = <val>
            int fooInt = 1;
            // Initialize multiple variables of same type with same
            // value <type> <name1>, <name2>, <name3> = <val>
            int fooInt1, fooInt2, fooInt3;
            fooInt1 = fooInt2 = fooInt3 = 1;

            /*
            *  Variable types
            */
            // Byte - 8-bit signed two's complement integer
            // (-128 <= byte <= 127)
            byte fooByte = 100;

            // Short - 16-bit signed two's complement integer
            // (-32,768 <= short <= 32,767)
            short fooShort = 10000;

            // Integer - 32-bit signed two's complement integer
            // (-2,147,483,648 <= int <= 2,147,483,647)
            int fooInt = 1;

            // Long - 64-bit signed two's complement integer
            // (-9,223,372,036,854,775,808 <= long <= 9,223,372,036,854,775,807)
            long fooLong = 100000L;
            // L is used to denote that this variable value is of type Long;
            // anything without is treated as integer by default.

            // Note: Java has no unsigned types.

            // Float - Single-precision 32-bit IEEE 754 Floating Point
            // 2^-149 <= float <= (2-2^-23) * 2^127
            float fooFloat = 234.5f;
            // f or F is used to denote that this variable value is of type float;
            // otherwise it is treated as double.

            // Double - Double-precision 64-bit IEEE 754 Floating Point
            // 2^-1074 <= x <= (2-2^-52) * 2^1023
            double fooDouble = 123.4;

            // Boolean - true & false
            boolean fooBoolean = true;
            boolean barBoolean = false;

            // Char - A single 16-bit Unicode character
            char fooChar = 'A';

            // final variables can't be reassigned to another object,
            final int HOURS_I_WORK_PER_WEEK = 9001;
            // but they can be initialized later.
            final double E;
            E = 2.71828;

            // BigInteger - Immutable arbitrary-precision integers
            //
            // BigInteger is a data type that allows programmers to manipulate
            // integers longer than 64-bits. Integers are stored as an array of
            // of bytes and are manipulated using functions built into BigInteger
            //
            // BigInteger can be initialized using an array of bytes or a string.
            BigInteger fooBigInteger = new BigInteger(fooByteArray);

            // BigDecimal - Immutable, arbitrary-precision signed decimal number
            //
            // A BigDecimal takes two parts: an arbitrary precision integer
            // unscaled value and a 32-bit integer scale
            //
            // BigDecimal allows the programmer complete control over decimal
            // rounding. It is recommended to use BigDecimal with currency values
            // and where exact decimal precision is required.
            //
            // BigDecimal can be initialized with an int, long, double or String
            // or by initializing the unscaled value (BigInteger) and scale (int).
            BigDecimal fooBigDecimal = new BigDecimal(fooBigInteger, fooInt);

            // Be wary of the constructor that takes a float or double as
            // the inaccuracy of the float/double will be copied in BigDecimal.
            // Prefer the String constructor when you need an exact value.
            BigDecimal tenCents = new BigDecimal("0.1");

            // Strings
            String fooString = "My String Is Here!";

            // \n is an escaped character that starts a new line
            String barString = "Printing on a new line?\nNo Problem!";
            // \t is an escaped character that adds a tab character
            String bazString = "Do you want to add a tab?\tNo Problem!";
            System.out.println(fooString);
            System.out.println(barString);
            System.out.println(bazString);

            // String Building
            // #1 - with plus operator
            // That's the basic way to do it (optimized under the hood)
            String plusConcatenated = "Strings can " + "be concatenated " + "via + operator.";
            System.out.println(plusConcatenated);
            // Output: Strings can be concatenated via + operator.

            // #2 - with StringBuilder
            // This way doesn't create any intermediate strings. It just stores the string pieces, and ties them together
            // when toString() is called.
            // Hint: This class is not thread safe. A thread-safe alternative (with some impact on performance) is StringBuffer.
            StringBuilder builderConcatenated = new StringBuilder();
            builderConcatenated.append("You ");
            builderConcatenated.append("can use ");
            builderConcatenated.append("the StringBuilder class.");
            System.out.println(builderConcatenated.toString()); // only now is the string built
            // Output: You can use the StringBuilder class.

            // #3 - with String formatter
            // Another alternative way to create strings. Fast and readable.
            String.format("%s may prefer %s.", "Or you", "String.format()");
            // Output: Or you may prefer String.format().

            // Arrays
            // The array size must be decided upon instantiation
            // The following formats work for declaring an array
            // <datatype>[] <var name> = new <datatype>[<array size>];
            // <datatype> <var name>[] = new <datatype>[<array size>];
            int[] intArray = new int[10];
            String[] stringArray = new String[1];
            boolean boolArray[] = new boolean[100];

            // Another way to declare & initialize an array
            int[] y = {9000, 1000, 1337};
            String names[] = {"Bob", "John", "Fred", "Juan Pedro"};
            boolean bools[] = {true, false, false};

            // Indexing an array - Accessing an element
            System.out.println("intArray @ 0: " + intArray[0]);

            // Arrays are zero-indexed and mutable.
            intArray[1] = 1;
            System.out.println("intArray @ 1: " + intArray[1]); // => 1

            // Other data types worth checking out
            // ArrayLists - Like arrays except more functionality is offered, and
            //              the size is mutable.
            // LinkedLists - Implementation of doubly-linked list. All of the
            //               operations perform as could be expected for a
            //               doubly-linked list.
            // Maps - A set of objects that map keys to values. Map is
            //        an interface and therefore cannot be instantiated.
            //        The type of keys and values contained in a Map must
            //        be specified upon instantiation of the implementing
            //        class. Each key may map to only one corresponding value,
            //        and each key may appear only once (no duplicates).
            // HashMaps - This class uses a hashtable to implement the Map
            //            interface. This allows the execution time of basic
            //            operations, such as get and insert element, to remain
            //            constant even for large sets.
            // TreeMap - This class is a sorted tree structure. It implements a red
            //           black tree and sorts the entries based on the key value or
            //           the comparator provided while creating the object

            ///////////////////////////////////////
            // Operators
            ///////////////////////////////////////
            System.out.println("\n->Operators");

            int i1 = 1, i2 = 2; // Shorthand for multiple declarations

            // Arithmetic is straightforward
            System.out.println("1+2 = " + (i1 + i2)); // => 3
            System.out.println("2-1 = " + (i2 - i1)); // => 1
            System.out.println("2*1 = " + (i2 * i1)); // => 2
            System.out.println("1/2 = " + (i1 / i2)); // => 0 (int/int returns int)
            System.out.println("1/2 = " + (i1 / (double)i2)); // => 0.5

            // Modulo
            System.out.println("11%3 = "+(11 % 3)); // => 2

            // Comparison operators
            System.out.println("3 == 2? " + (3 == 2)); // => false
            System.out.println("3 != 2? " + (3 != 2)); // => true
            System.out.println("3 > 2? " + (3 > 2)); // => true
            System.out.println("3 < 2? " + (3 < 2)); // => false
            System.out.println("2 <= 2? " + (2 <= 2)); // => true
            System.out.println("2 >= 2? " + (2 >= 2)); // => true

            // Boolean operators
            System.out.println("3 > 2 && 2 > 3? " + ((3 > 2) && (2 > 3))); // => false
            System.out.println("3 > 2 || 2 > 3? " + ((3 > 2) || (2 > 3))); // => true
            System.out.println("!(3 == 2)? " + (!(3 == 2))); // => true

            // Bitwise operators!
            /*
            ~      Unary bitwise complement
            <<     Signed left shift
            >>     Signed/Arithmetic right shift
            >>>    Unsigned/Logical right shift
            &      Bitwise AND
            ^      Bitwise exclusive OR
            |      Bitwise inclusive OR
            */

            // Increment operators
            int i = 0;
            System.out.println("\n->Inc/Dec-rementation");
            // The ++ and -- operators increment and decrement by 1 respectively.
            // If they are placed before the variable, they increment then return;
            // after the variable they return then increment.
            System.out.println(i++); // i = 1, prints 0 (post-increment)
            System.out.println(++i); // i = 2, prints 2 (pre-increment)
            System.out.println(i--); // i = 1, prints 2 (post-decrement)
            System.out.println(--i); // i = 0, prints 0 (pre-decrement)

            ///////////////////////////////////////
            // Control Structures
            ///////////////////////////////////////
            System.out.println("\n->Control Structures");

            // If statements are c-like
            int j = 10;
            if (j == 10) {
                System.out.println("I get printed");
            } else if (j > 10) {
                System.out.println("I don't");
            } else {
                System.out.println("I also don't");
            }

            // While loop
            int fooWhile = 0;
            while(fooWhile < 100) {
                System.out.println(fooWhile);
                // Increment the counter
                // Iterated 100 times, fooWhile 0,1,2...99
                fooWhile++;
            }
            System.out.println("fooWhile Value: " + fooWhile);

            // Do While Loop
            int fooDoWhile = 0;
            do {
                System.out.println(fooDoWhile);
                // Increment the counter
                // Iterated 99 times, fooDoWhile 0->99
                fooDoWhile++;
            } while(fooDoWhile < 100);
            System.out.println("fooDoWhile Value: " + fooDoWhile);

            // For Loop
            // for loop structure => for(<start_statement>; <conditional>; <step>)
            for (int fooFor = 0; fooFor < 10; fooFor++) {
                System.out.println(fooFor);
                // Iterated 10 times, fooFor 0->9
            }
            System.out.println("fooFor Value: " + fooFor);

            // Nested For Loop Exit with Label
            outer:
            for (int i = 0; i < 10; i++) {
              for (int j = 0; j < 10; j++) {
                if (i == 5 && j ==5) {
                  break outer;
                  // breaks out of outer loop instead of only the inner one
                }
              }
            }

            // For Each Loop
            // The for loop is also able to iterate over arrays as well as objects
            // that implement the Iterable interface.
            int[] fooList = {1, 2, 3, 4, 5, 6, 7, 8, 9};
            // for each loop structure => for (<object> : <iterable>)
            // reads as: for each element in the iterable
            // note: the object type must match the element type of the iterable.
            for (int bar : fooList) {
                System.out.println(bar);
                //Iterates 9 times and prints 1-9 on new lines
            }

            // Switch Case
            // A switch works with the byte, short, char, and int data types.
            // It also works with enumerated types (discussed in Enum Types), the
            // String class, and a few special classes that wrap primitive types:
            // Character, Byte, Short, and Integer.
            int month = 3;
            String monthString;
            switch (month) {
                case 1: monthString = "January";
                        break;
                case 2: monthString = "February";
                        break;
                case 3: monthString = "March";
                        break;
                default: monthString = "Some other month";
                         break;
            }
            System.out.println("Switch Case Result: " + monthString);

            // Starting in Java 7 and above, switching Strings works like this:
            String myAnswer = "maybe";
            switch(myAnswer) {
                case "yes":
                    System.out.println("You answered yes.");
                    break;
                case "no":
                    System.out.println("You answered no.");
                    break;
                case "maybe":
                    System.out.println("You answered maybe.");
                    break;
                default:
                    System.out.println("You answered " + myAnswer);
                    break;
            }

            // Conditional Shorthand
            // You can use the '?' operator for quick assignments or logic forks.
            // Reads as "If (statement) is true, use <first value>, otherwise, use
            // <second value>"
            int foo = 5;
            String bar = (foo < 10) ? "A" : "B";
            System.out.println(bar); // Prints A, because the statement is true

            ////////////////////////////////////////
            // Converting Data Types And Typecasting
            ////////////////////////////////////////

            // Converting data

            // Convert String To Integer
            Integer.parseInt("123");//returns an integer version of "123"

            // Convert Integer To String
            Integer.toString(123);//returns a string version of 123

            // For other conversions check out the following classes:
            // Double
            // Long
            // String

            // Typecasting
            // You can also cast Java objects, there's a lot of details and deals
            // with some more intermediate concepts. Feel free to check it out here:
            // http://docs.oracle.com/javase/tutorial/java/IandI/subclasses.html

            ///////////////////////////////////////
            // Classes And Functions
            ///////////////////////////////////////

            System.out.println("\n->Classes & Functions");

            // (definition of the Bicycle class follows)

            // Use new to instantiate a class
            Bicycle trek = new Bicycle();

            // Call object methods
            trek.speedUp(3); // You should always use setter and getter methods
            trek.setCadence(100);

            // toString returns this Object's string representation.
            System.out.println("trek info: " + trek.toString());

            // Double Brace Initialization
            // The Java Language has no syntax for how to create static Collections
            // in an easy way. Usually you end up in the following way:
            private static final Set<String> COUNTRIES = new HashSet<String>();
            static {
               COUNTRIES.add("DENMARK");
               COUNTRIES.add("SWEDEN");
               COUNTRIES.add("FINLAND");
            }

            // But there's a nifty way to achieve the same thing in an
            // easier way, by using something that is called Double Brace
            // Initialization.
            private static final Set<String> COUNTRIES = new HashSet<String>() {{
                add("DENMARK");
                add("SWEDEN");
                add("FINLAND");
            }}

            // The first brace is creating a new AnonymousInnerClass and the
            // second one declares an instance initializer block. This block
            // is called when the anonymous inner class is created.
            // This does not only work for Collections, it works for all
            // non-final classes.

        } // End main method
    } // End LearnJava class

    // You can include other, non-public outer-level classes in a .java file,
    // but it is not good practice. Instead split classes into separate files.

    // Class Declaration Syntax:
    // <public/private/protected> class <class name> {
    //    // data fields, constructors, functions all inside.
    //    // functions are called as methods in Java.
    // }

    class Bicycle {

        // Bicycle's Fields/Variables
        public int cadence; // Public: Can be accessed from anywhere
        private int speed;  // Private: Only accessible from within the class
        protected int gear; // Protected: Accessible from the class and subclasses
        String name; // default: Only accessible from within this package
        static String className; // Static class variable

        // Static block
        // Java has no implementation of static constructors, but
        // has a static block that can be used to initialize class variables
        // (static variables).
        // This block will be called when the class is loaded.
        static {
            className = "Bicycle";
        }

        // Constructors are a way of creating classes
        // This is a constructor
        public Bicycle() {
            // You can also call another constructor:
            // this(1, 50, 5, "Bontrager");
            gear = 1;
            cadence = 50;
            speed = 5;
            name = "Bontrager";
        }
        // This is a constructor that takes arguments
        public Bicycle(int startCadence, int startSpeed, int startGear,
            String name) {
            this.gear = startGear;
            this.cadence = startCadence;
            this.speed = startSpeed;
            this.name = name;
        }

        // Method Syntax:
        // <public/private/protected> <return type> <function name>(<args>)

        // Java classes often implement getters and setters for their fields

        // Method declaration syntax:
        // <access modifier> <return type> <method name>(<args>)
        public int getCadence() {
            return cadence;
        }

        // void methods require no return statement
        public void setCadence(int newValue) {
            cadence = newValue;
        }
        public void setGear(int newValue) {
            gear = newValue;
        }
        public void speedUp(int increment) {
            speed += increment;
        }
        public void slowDown(int decrement) {
            speed -= decrement;
        }
        public void setName(String newName) {
            name = newName;
        }
        public String getName() {
            return name;
        }

        //Method to display the attribute values of this Object.
        @Override // Inherited from the Object class.
        public String toString() {
            return "gear: " + gear + " cadence: " + cadence + " speed: " + speed +
                " name: " + name;
        }
    } // end class Bicycle

    // PennyFarthing is a subclass of Bicycle
    class PennyFarthing extends Bicycle {
        // (Penny Farthings are those bicycles with the big front wheel.
        // They have no gears.)

        public PennyFarthing(int startCadence, int startSpeed) {
            // Call the parent constructor with super
            super(startCadence, startSpeed, 0, "PennyFarthing");
        }

        // You should mark a method you're overriding with an @annotation.
        // To learn more about what annotations are and their purpose check this
        // out: http://docs.oracle.com/javase/tutorial/java/annotations/
        @Override
        public void setGear(int gear) {
            this.gear = 0;
        }
    }

    // Interfaces
    // Interface declaration syntax
    // <access-level> interface <interface-name> extends <super-interfaces> {
    //     // Constants
    //     // Method declarations
    // }

    // Example - Food:
    public interface Edible {
        public void eat(); // Any class that implements this interface, must
                           // implement this method.
    }

    public interface Digestible {
        public void digest();
        // In Java 8, interfaces can have default method.
        // public void digest() {
        //     System.out.println("digesting ...");
        // }
    }

    // We can now create a class that implements both of these interfaces.
    public class Fruit implements Edible, Digestible {
        @Override
        public void eat() {
            // ...
        }

        @Override
        public void digest() {
            // ...
        }
    }

    // In Java, you can extend only one class, but you can implement many
    // interfaces. For example:
    public class ExampleClass extends ExampleClassParent implements InterfaceOne,
        InterfaceTwo {
        @Override
        public void InterfaceOneMethod() {
        }

        @Override
        public void InterfaceTwoMethod() {
        }

    }

    // Abstract Classes

    // Abstract Class declaration syntax
    // <access-level> abstract <abstract-class-name> extends <super-abstract-classes> {
    //     // Constants and variables
    //     // Method declarations
    // }

    // Marking a class as abstract means that it contains abstract methods that
    // must be defined in a child class. Similar to interfaces, abstract classes
    // cannot be instantiated, but instead must be extended and the abstract
    // methods defined. Different from interfaces, abstract classes can contain a
    // concrete and abstract methods. Methods in an interface cannot have a body,
    // mixture of unless the method is static, and variables are final by default,
    // unlike an abstract class. Also abstract classes CAN have the "main" method.
    public abstract class Animal
    {
        public abstract void makeSound();

        // Method can have a body
        public void eat()
        {
            System.out.println("I am an animal and I am Eating.");
            // Note: We can access private variable here.
            age = 30;
        }

        // No need to initialize, however in an interface
        // a variable is implicitly final and hence has
        // to be initialized.
        protected int age;

        public void printAge()
        {
            System.out.println(age);
        }

        // Abstract classes can have main function.
        public static void main(String[] args)
        {
            System.out.println("I am abstract");
        }
    }

    class Dog extends Animal
    {
        // Note still have to override the abstract methods in the
        // abstract class.
        @Override
        public void makeSound()
        {
            System.out.println("Bark");
            // age = 30;    ==> ERROR!  age is private to Animal
        }

        // NOTE: You will get an error if you used the
        // @Override annotation here, since java doesn't allow
        // overriding of static methods.
        // What is happening here is called METHOD HIDING.
        // Check out this SO post: http://stackoverflow.com/questions/16313649/
        public static void main(String[] args)
        {
            Dog pluto = new Dog();
            pluto.makeSound();
            pluto.eat();
            pluto.printAge();
        }
    }

    // Final Classes

    // Final Class declaration syntax
    // <access-level> final <final-class-name> {
    //     // Constants and variables
    //     // Method declarations
    // }

    // Final classes are classes that cannot be inherited from and are therefore a
    // final child. In a way, final classes are the opposite of abstract classes
    // because abstract classes must be extended, but final classes cannot be
    // extended.
    public final class SaberToothedCat extends Animal
    {
        // Note still have to override the abstract methods in the
        // abstract class.
        @Override
        public void makeSound()
        {
            System.out.println("Roar");
        }
    }

    // Final Methods
    public abstract class Mammal()
    {
        // Final Method Syntax:
        // <access modifier> final <return type> <function name>(<args>)

        // Final methods, like, final classes cannot be overridden by a child
        // class, and are therefore the final implementation of the method.
        public final boolean isWarmBlooded()
        {
            return true;
        }
    }

    // Enum Type
    //
    // An enum type is a special data type that enables for a variable to be a set
    // of predefined constants. The variable must be equal to one of the values
    // that have been predefined for it. Because they are constants, the names of
    // an enum type's fields are in uppercase letters. In the Java programming
    // language, you define an enum type by using the enum keyword. For example,
    // you would specify a days-of-the-week enum type as:
    public enum Day {
        SUNDAY, MONDAY, TUESDAY, WEDNESDAY,
        THURSDAY, FRIDAY, SATURDAY
    }

    // We can use our enum Day like that:
    public class EnumTest {
        // Variable Enum
        Day day;

        public EnumTest(Day day) {
            this.day = day;
        }

        public void tellItLikeItIs() {
            switch (day) {
                case MONDAY:
                    System.out.println("Mondays are bad.");
                    break;
                case FRIDAY:
                    System.out.println("Fridays are better.");
                    break;
                case SATURDAY:
                case SUNDAY:
                    System.out.println("Weekends are best.");
                    break;
                default:
                    System.out.println("Midweek days are so-so.");
                    break;
            }
        }

        public static void main(String[] args) {
            EnumTest firstDay = new EnumTest(Day.MONDAY);
            firstDay.tellItLikeItIs(); // => Mondays are bad.
            EnumTest thirdDay = new EnumTest(Day.WEDNESDAY);
            thirdDay.tellItLikeItIs(); // => Midweek days are so-so.
        }
    }

    // Enum types are much more powerful than we show above.
    // The enum body can include methods and other fields.
    // You can see more at https://docs.oracle.com/javase/tutorial/java/javaOO/enum.html

    ```

Perl -<

:   ```perl
    # Single line comments start with a number sign.

    #### Strict and warnings

    use strict;
    use warnings;

    # All perl scripts and modules should include these lines. Strict causes
    # compilation to fail in cases like misspelled variable names, and
    # warnings will print warning messages in case of common pitfalls like
    # concatenating to an undefined value.

    #### Perl variable types

    #  Variables begin with a sigil, which is a symbol showing the type.
    #  A valid variable name starts with a letter or underscore,
    #  followed by any number of letters, numbers, or underscores.

    ### Perl has three main variable types: $scalar, @array, and %hash.

    ## Scalars
    #  A scalar represents a single value:
    my $animal = "camel";
    my $answer = 42;

    # Scalar values can be strings, integers or floating point numbers, and
    # Perl will automatically convert between them as required.

    ## Arrays
    #  An array represents a list of values:
    my @animals = ("camel", "llama", "owl");
    my @numbers = (23, 42, 69);
    my @mixed   = ("camel", 42, 1.23);

    # Array elements are accessed using square brackets, with a $ to
    # indicate one value will be returned.
    my $second = $animals[1];

    ## Hashes
    #   A hash represents a set of key/value pairs:

    my %fruit_color = ("apple", "red", "banana", "yellow");

    #  You can use whitespace and the "=>" operator to lay them out more
    #  nicely:

    my %fruit_color = (
      apple  => "red",
      banana => "yellow",
    );

    # Hash elements are accessed using curly braces, again with the $ sigil.
    my $color = $fruit_color{apple};

    # Scalars, arrays and hashes are documented more fully in perldata.
    # (perldoc perldata).

    #### References

    # More complex data types can be constructed using references, which
    # allow you to build arrays and hashes within arrays and hashes.

    my $array_ref = \@array;
    my $hash_ref = \%hash;
    my @array_of_arrays = (\@array1, \@array2, \@array3);

    # You can also create anonymous arrays or hashes, returning a reference:

    my $fruits = ["apple", "banana"];
    my $colors = {apple => "red", banana => "yellow"};

    # References can be dereferenced by prefixing the appropriate sigil.

    my @fruits_array = @$fruits;
    my %colors_hash = %$colors;

    # As a shortcut, the arrow operator can be used to dereference and
    # access a single value.

    my $first = $array_ref->[0];
    my $value = $hash_ref->{banana};

    # See perlreftut and perlref for more in-depth documentation on
    # references.

    #### Conditional and looping constructs

    # Perl has most of the usual conditional and looping constructs.

    if ($var) {
      ...
    } elsif ($var eq 'bar') {
      ...
    } else {
      ...
    }

    unless (condition) {
      ...
    }
    # This is provided as a more readable version of "if (!condition)"

    # the Perlish post-condition way
    print "Yow!" if $zippy;
    print "We have no bananas" unless $bananas;

    #  while
    while (condition) {
      ...
    }


    # for loops and iteration
    for (my $i = 0; $i < $max; $i++) {
      print "index is $i";
    }

    for (my $i = 0; $i < @elements; $i++) {
      print "Current element is " . $elements[$i];
    }

    for my $element (@elements) {
      print $element;
    }

    # implicitly

    for (@elements) {
      print;
    }

    # the Perlish post-condition way again
    print for @elements;

    # iterating through the keys and values of a referenced hash
    print $hash_ref->{$_} for keys %$hash_ref;

    #### Regular expressions

    # Perl's regular expression support is both broad and deep, and is the
    # subject of lengthy documentation in perlrequick, perlretut, and
    # elsewhere. However, in short:

    # Simple matching
    if (/foo/)       { ... }  # true if $_ contains "foo"
    if ($x =~ /foo/) { ... }  # true if $x contains "foo"

    # Simple substitution

    $x =~ s/foo/bar/;         # replaces foo with bar in $x
    $x =~ s/foo/bar/g;        # replaces ALL INSTANCES of foo with bar in $x


    #### Files and I/O

    # You can open a file for input or output using the "open()" function.

    open(my $in,  "<",  "input.txt")  or die "Can't open input.txt: $!";
    open(my $out, ">",  "output.txt") or die "Can't open output.txt: $!";
    open(my $log, ">>", "my.log")     or die "Can't open my.log: $!";

    # You can read from an open filehandle using the "<>" operator.  In
    # scalar context it reads a single line from the filehandle, and in list
    # context it reads the whole file in, assigning each line to an element
    # of the list:

    my $line  = <$in>;
    my @lines = <$in>;

    #### Writing subroutines

    # Writing subroutines is easy:

    sub logger {
      my $logmessage = shift;

      open my $logfile, ">>", "my.log" or die "Could not open my.log: $!";

      print $logfile $logmessage;
    }

    # Now we can use the subroutine just as any other built-in function:

    logger("We have a logger subroutine!");

    #### Modules

    # A module is a set of Perl code, usually subroutines, which can be used
    # in other Perl code. It is usually stored in a file with the extension
    # .pm so that Perl can find it.

    package MyModule;
    use strict;
    use warnings;

    sub trim {
      my $string = shift;
      $string =~ s/^\s+//;
      $string =~ s/\s+$//;
      return $string;
    }

    1;

    # From elsewhere:

    use MyModule;
    MyModule::trim($string);

    # The Exporter module can help with making subroutines exportable, so
    # they can be used like this:

    use MyModule 'trim';
    trim($string);

    # Many Perl modules can be downloaded from CPAN (http://www.cpan.org/)
    # and provide a range of features to help you avoid reinventing the
    # wheel.  A number of popular modules like Exporter are included with
    # the Perl distribution itself. See perlmod for more details on modules
    # in Perl.

    #### Objects

    # Objects in Perl are just references that know which class (package)
    # they belong to, so that methods (subroutines) called on it can be
    # found there. The bless function is used in constructors (usually new)
    # to set this up. However, you never need to call it yourself if you use
    # a module like Moose or Moo (see below).

    package MyCounter;
    use strict;
    use warnings;

    sub new {
      my $class = shift;
      my $self = {count => 0};
      return bless $self, $class;
    }

    sub count {
      my $self = shift;
      return $self->{count};
    }

    sub increment {
      my $self = shift;
      $self->{count}++;
    }

    1;

    # Methods can be called on a class or object instance with the arrow
    # operator.

    use MyCounter;
    my $counter = MyCounter->new;
    print $counter->count, "\n"; # 0
    $counter->increment;
    print $counter->count, "\n"; # 1

    # The modules Moose and Moo from CPAN can help you set up your object
    # classes. They provide a constructor and simple syntax for declaring
    # attributes. This class can be used equivalently to the one above.

    package MyCounter;
    use Moo; # imports strict and warnings

    has 'count' => (is => 'rwp', default => 0, init_arg => undef);

    sub increment {
      my $self = shift;
      $self->_set_count($self->count + 1);
    }

    1;

    # Object-oriented programming is covered more thoroughly in perlootut,
    # and its low-level implementation in Perl is covered in perlobj.
    ```

R -<

:   ```r
    # Comments start with number symbols.

    # You can't make multi-line comments,
    # but you can stack multiple comments like so.

    # in Windows you can use CTRL-ENTER to execute a line.
    # on Mac it is COMMAND-ENTER



    #############################################################################
    # Stuff you can do without understanding anything about programming
    #############################################################################

    # In this section, we show off some of the cool stuff you can do in
    # R without understanding anything about programming. Do not worry
    # about understanding everything the code does. Just enjoy!

    data()          # browse pre-loaded data sets
    data(rivers)    # get this one: "Lengths of Major North American Rivers"
    ls()            # notice that "rivers" now appears in the workspace
    head(rivers)    # peek at the data set
    # 735 320 325 392 524 450

    length(rivers)  # how many rivers were measured?
    # 141
    summary(rivers) # what are some summary statistics?
    #   Min. 1st Qu.  Median    Mean 3rd Qu.    Max.
    #  135.0   310.0   425.0   591.2   680.0  3710.0

    # make a stem-and-leaf plot (a histogram-like data visualization)
    stem(rivers)

    #  The decimal point is 2 digit(s) to the right of the |
    #
    #   0 | 4
    #   2 | 011223334555566667778888899900001111223333344455555666688888999
    #   4 | 111222333445566779001233344567
    #   6 | 000112233578012234468
    #   8 | 045790018
    #  10 | 04507
    #  12 | 1471
    #  14 | 56
    #  16 | 7
    #  18 | 9
    #  20 |
    #  22 | 25
    #  24 | 3
    #  26 |
    #  28 |
    #  30 |
    #  32 |
    #  34 |
    #  36 | 1

    stem(log(rivers)) # Notice that the data are neither normal nor log-normal!
    # Take that, Bell curve fundamentalists.

    #  The decimal point is 1 digit(s) to the left of the |
    #
    #  48 | 1
    #  50 |
    #  52 | 15578
    #  54 | 44571222466689
    #  56 | 023334677000124455789
    #  58 | 00122366666999933445777
    #  60 | 122445567800133459
    #  62 | 112666799035
    #  64 | 00011334581257889
    #  66 | 003683579
    #  68 | 0019156
    #  70 | 079357
    #  72 | 89
    #  74 | 84
    #  76 | 56
    #  78 | 4
    #  80 |
    #  82 | 2

    # make a histogram:
    hist(rivers, col="#333333", border="white", breaks=25) # play around with these parameters
    hist(log(rivers), col="#333333", border="white", breaks=25) # you'll do more plotting later

    # Here's another neat data set that comes pre-loaded. R has tons of these.
    data(discoveries)
    plot(discoveries, col="#333333", lwd=3, xlab="Year",
         main="Number of important discoveries per year")
    plot(discoveries, col="#333333", lwd=3, type = "h", xlab="Year",
         main="Number of important discoveries per year")

    # Rather than leaving the default ordering (by year),
    # we could also sort to see what's typical:
    sort(discoveries)
    #  [1]  0  0  0  0  0  0  0  0  0  1  1  1  1  1  1  1  1  1  1  1  1  2  2  2  2
    # [26]  2  2  2  2  2  2  2  2  2  2  2  2  2  2  2  2  2  2  2  2  2  2  3  3  3
    # [51]  3  3  3  3  3  3  3  3  3  3  3  3  3  3  3  3  3  4  4  4  4  4  4  4  4
    # [76]  4  4  4  4  5  5  5  5  5  5  5  6  6  6  6  6  6  7  7  7  7  8  9 10 12

    stem(discoveries, scale=2)
    #
    #  The decimal point is at the |
    #
    #   0 | 000000000
    #   1 | 000000000000
    #   2 | 00000000000000000000000000
    #   3 | 00000000000000000000
    #   4 | 000000000000
    #   5 | 0000000
    #   6 | 000000
    #   7 | 0000
    #   8 | 0
    #   9 | 0
    #  10 | 0
    #  11 |
    #  12 | 0

    max(discoveries)
    # 12
    summary(discoveries)
    #   Min. 1st Qu.  Median    Mean 3rd Qu.    Max.
    #    0.0     2.0     3.0     3.1     4.0    12.0

    # Roll a die a few times
    round(runif(7, min=.5, max=6.5))
    # 1 4 6 1 4 6 4
    # Your numbers will differ from mine unless we set the same random.seed(31337)

    # Draw from a standard Gaussian 9 times
    rnorm(9)
    # [1]  0.07528471  1.03499859  1.34809556 -0.82356087  0.61638975 -1.88757271
    # [7] -0.59975593  0.57629164  1.08455362



    ##################################################
    # Data types and basic arithmetic
    ##################################################

    # Now for the programming-oriented part of the tutorial.
    # In this section you will meet the important data types of R:
    # integers, numerics, characters, logicals, and factors.
    # There are others, but these are the bare minimum you need to
    # get started.

    # INTEGERS
    # Long-storage integers are written with L
    5L # 5
    class(5L) # "integer"
    # (Try ?class for more information on the class() function.)
    # In R, every single value, like 5L, is considered a vector of length 1
    length(5L) # 1
    # You can have an integer vector with length > 1 too:
    c(4L, 5L, 8L, 3L) # 4 5 8 3
    length(c(4L, 5L, 8L, 3L)) # 4
    class(c(4L, 5L, 8L, 3L)) # "integer"

    # NUMERICS
    # A "numeric" is a double-precision floating-point number
    5 # 5
    class(5) # "numeric"
    # Again, everything in R is a vector;
    # you can make a numeric vector with more than one element
    c(3,3,3,2,2,1) # 3 3 3 2 2 1
    # You can use scientific notation too
    5e4 # 50000
    6.02e23 # Avogadro's number
    1.6e-35 # Planck length
    # You can also have infinitely large or small numbers
    class(Inf)  # "numeric"
    class(-Inf) # "numeric"
    # You might use "Inf", for example, in integrate(dnorm, 3, Inf);
    # this obviates Z-score tables.

    # BASIC ARITHMETIC
    # You can do arithmetic with numbers
    # Doing arithmetic on a mix of integers and numerics gives you another numeric
    10L + 66L # 76      # integer plus integer gives integer
    53.2 - 4  # 49.2    # numeric minus numeric gives numeric
    2.0 * 2L  # 4       # numeric times integer gives numeric
    3L / 4    # 0.75    # integer over numeric gives numeric
    3 %% 2    # 1       # the remainder of two numerics is another numeric
    # Illegal arithmetic yeilds you a "not-a-number":
    0 / 0 # NaN
    class(NaN) # "numeric"
    # You can do arithmetic on two vectors with length greater than 1,
    # so long as the larger vector's length is an integer multiple of the smaller
    c(1,2,3) + c(1,2,3) # 2 4 6
    # Since a single number is a vector of length one, scalars are applied
    # elementwise to vectors
    (4 * c(1,2,3) - 2) / 2 # 1 3 5
    # Except for scalars, use caution when performing arithmetic on vectors with
    # different lengths. Although it can be done,
    c(1,2,3,1,2,3) * c(1,2) # 1 4 3 2 2 6
    # Matching lengths is better practice and easier to read
    c(1,2,3,1,2,3) * c(1,2,1,2,1,2)

    # CHARACTERS
    # There's no difference between strings and characters in R
    "Horatio" # "Horatio"
    class("Horatio") # "character"
    class('H') # "character"
    # Those were both character vectors of length 1
    # Here is a longer one:
    c('alef', 'bet', 'gimmel', 'dalet', 'he')
    # =>
    # "alef"   "bet"    "gimmel" "dalet"  "he"
    length(c("Call","me","Ishmael")) # 3
    # You can do regex operations on character vectors:
    substr("Fortuna multis dat nimis, nulli satis.", 9, 15) # "multis "
    gsub('u', 'ø', "Fortuna multis dat nimis, nulli satis.") # "Fortøna møltis dat nimis, nølli satis."
    # R has several built-in character vectors:
    letters
    # =>
    #  [1] "a" "b" "c" "d" "e" "f" "g" "h" "i" "j" "k" "l" "m" "n" "o" "p" "q" "r" "s"
    # [20] "t" "u" "v" "w" "x" "y" "z"
    month.abb # "Jan" "Feb" "Mar" "Apr" "May" "Jun" "Jul" "Aug" "Sep" "Oct" "Nov" "Dec"

    # LOGICALS
    # In R, a "logical" is a boolean
    class(TRUE) # "logical"
    class(FALSE)    # "logical"
    # Their behavior is normal
    TRUE == TRUE    # TRUE
    TRUE == FALSE   # FALSE
    FALSE != FALSE  # FALSE
    FALSE != TRUE   # TRUE
    # Missing data (NA) is logical, too
    class(NA)   # "logical"
    # Use | and & for logic operations.
    # OR
    TRUE | FALSE    # TRUE
    # AND
    TRUE & FALSE    # FALSE
    # Applying | and & to vectors returns elementwise logic operations
    c(TRUE,FALSE,FALSE) | c(FALSE,TRUE,FALSE) # TRUE TRUE FALSE
    c(TRUE,FALSE,TRUE) & c(FALSE,TRUE,TRUE) # FALSE FALSE TRUE
    # You can test if x is TRUE
    isTRUE(TRUE)    # TRUE
    # Here we get a logical vector with many elements:
    c('Z', 'o', 'r', 'r', 'o') == "Zorro" # FALSE FALSE FALSE FALSE FALSE
    c('Z', 'o', 'r', 'r', 'o') == "Z" # TRUE FALSE FALSE FALSE FALSE

    # FACTORS
    # The factor class is for categorical data
    # Factors can be ordered (like childrens' grade levels) or unordered (like gender)
    factor(c("female", "female", "male", NA, "female"))
    #  female female male   <NA>   female
    # Levels: female male
    # The "levels" are the values the categorical data can take
    # Note that missing data does not enter the levels
    levels(factor(c("male", "male", "female", NA, "female"))) # "female" "male"
    # If a factor vector has length 1, its levels will have length 1, too
    length(factor("male")) # 1
    length(levels(factor("male"))) # 1
    # Factors are commonly seen in data frames, a data structure we will cover later
    data(infert) # "Infertility after Spontaneous and Induced Abortion"
    levels(infert$education) # "0-5yrs"  "6-11yrs" "12+ yrs"

    # NULL
    # "NULL" is a weird one; use it to "blank out" a vector
    class(NULL) # NULL
    parakeet = c("beak", "feathers", "wings", "eyes")
    parakeet
    # =>
    # [1] "beak"     "feathers" "wings"    "eyes"
    parakeet <- NULL
    parakeet
    # =>
    # NULL

    # TYPE COERCION
    # Type-coercion is when you force a value to take on a different type
    as.character(c(6, 8)) # "6" "8"
    as.logical(c(1,0,1,1)) # TRUE FALSE  TRUE  TRUE
    # If you put elements of different types into a vector, weird coercions happen:
    c(TRUE, 4) # 1 4
    c("dog", TRUE, 4) # "dog"  "TRUE" "4"
    as.numeric("Bilbo")
    # =>
    # [1] NA
    # Warning message:
    # NAs introduced by coercion

    # Also note: those were just the basic data types
    # There are many more data types, such as for dates, time series, etc.



    ##################################################
    # Variables, loops, if/else
    ##################################################

    # A variable is like a box you store a value in for later use.
    # We call this "assigning" the value to the variable.
    # Having variables lets us write loops, functions, and if/else statements

    # VARIABLES
    # Lots of way to assign stuff:
    x = 5 # this is possible
    y <- "1" # this is preferred
    TRUE -> z # this works but is weird

    # LOOPS
    # We've got for loops
    for (i in 1:4) {
      print(i)
    }
    # We've got while loops
    a <- 10
    while (a > 4) {
        cat(a, "...", sep = "")
        a <- a - 1
    }
    # Keep in mind that for and while loops run slowly in R
    # Operations on entire vectors (i.e. a whole row, a whole column)
    # or apply()-type functions (we'll discuss later) are preferred

    # IF/ELSE
    # Again, pretty standard
    if (4 > 3) {
        print("4 is greater than 3")
    } else {
        print("4 is not greater than 3")
    }
    # =>
    # [1] "4 is greater than 3"

    # FUNCTIONS
    # Defined like so:
    jiggle <- function(x) {
        x = x + rnorm(1, sd=.1) #add in a bit of (controlled) noise
        return(x)
    }
    # Called like any other R function:
    jiggle(5)   # 5±ε. After set.seed(2716057), jiggle(5)==5.005043



    ###########################################################################
    # Data structures: Vectors, matrices, data frames, and arrays
    ###########################################################################

    # ONE-DIMENSIONAL

    # Let's start from the very beginning, and with something you already know: vectors.
    vec <- c(8, 9, 10, 11)
    vec #  8  9 10 11
    # We ask for specific elements by subsetting with square brackets
    # (Note that R starts counting from 1)
    vec[1]      # 8
    letters[18] # "r"
    LETTERS[13] # "M"
    month.name[9]   # "September"
    c(6, 8, 7, 5, 3, 0, 9)[3]   # 7
    # We can also search for the indices of specific components,
    which(vec %% 2 == 0)    # 1 3
    # grab just the first or last few entries in the vector,
    head(vec, 1)    # 8
    tail(vec, 2)    # 10 11
    # or figure out if a certain value is in the vector
    any(vec == 10) # TRUE
    # If an index "goes over" you'll get NA:
    vec[6]  # NA
    # You can find the length of your vector with length()
    length(vec) # 4
    # You can perform operations on entire vectors or subsets of vectors
    vec * 4 # 16 20 24 28
    vec[2:3] * 5    # 25 30
    any(vec[2:3] == 8) # FALSE
    # and R has many built-in functions to summarize vectors
    mean(vec)   # 9.5
    var(vec)    # 1.666667
    sd(vec)     # 1.290994
    max(vec)    # 11
    min(vec)    # 8
    sum(vec)    # 38
    # Some more nice built-ins:
    5:15    # 5  6  7  8  9 10 11 12 13 14 15
    seq(from=0, to=31337, by=1337)
    # =>
    #  [1]     0  1337  2674  4011  5348  6685  8022  9359 10696 12033 13370 14707
    # [13] 16044 17381 18718 20055 21392 22729 24066 25403 26740 28077 29414 30751

    # TWO-DIMENSIONAL (ALL ONE CLASS)

    # You can make a matrix out of entries all of the same type like so:
    mat <- matrix(nrow = 3, ncol = 2, c(1,2,3,4,5,6))
    mat
    # =>
    #      [,1] [,2]
    # [1,]    1    4
    # [2,]    2    5
    # [3,]    3    6
    # Unlike a vector, the class of a matrix is "matrix", no matter what's in it
    class(mat) # => "matrix"
    # Ask for the first row
    mat[1,] # 1 4
    # Perform operation on the first column
    3 * mat[,1] # 3 6 9
    # Ask for a specific cell
    mat[3,2]    # 6

    # Transpose the whole matrix
    t(mat)
    # =>
    #      [,1] [,2] [,3]
    # [1,]    1    2    3
    # [2,]    4    5    6

    # Matrix multiplication
    mat %*% t(mat)
    # =>
    #      [,1] [,2] [,3]
    # [1,]   17   22   27
    # [2,]   22   29   36
    # [3,]   27   36   45

    # cbind() sticks vectors together column-wise to make a matrix
    mat2 <- cbind(1:4, c("dog", "cat", "bird", "dog"))
    mat2
    # =>
    #      [,1] [,2]
    # [1,] "1"  "dog"
    # [2,] "2"  "cat"
    # [3,] "3"  "bird"
    # [4,] "4"  "dog"
    class(mat2) # matrix
    # Again, note what happened!
    # Because matrices must contain entries all of the same class,
    # everything got converted to the character class
    c(class(mat2[,1]), class(mat2[,2]))

    # rbind() sticks vectors together row-wise to make a matrix
    mat3 <- rbind(c(1,2,4,5), c(6,7,0,4))
    mat3
    # =>
    #      [,1] [,2] [,3] [,4]
    # [1,]    1    2    4    5
    # [2,]    6    7    0    4
    # Ah, everything of the same class. No coercions. Much better.

    # TWO-DIMENSIONAL (DIFFERENT CLASSES)

    # For columns of different types, use a data frame
    # This data structure is so useful for statistical programming,
    # a version of it was added to Python in the package "pandas".

    students <- data.frame(c("Cedric","Fred","George","Cho","Draco","Ginny"),
                           c(3,2,2,1,0,-1),
                           c("H", "G", "G", "R", "S", "G"))
    names(students) <- c("name", "year", "house") # name the columns
    class(students) # "data.frame"
    students
    # =>
    #     name year house
    # 1 Cedric    3     H
    # 2   Fred    2     G
    # 3 George    2     G
    # 4    Cho    1     R
    # 5  Draco    0     S
    # 6  Ginny   -1     G
    class(students$year)    # "numeric"
    class(students[,3]) # "factor"
    # find the dimensions
    nrow(students)  # 6
    ncol(students)  # 3
    dim(students)   # 6 3
    # The data.frame() function converts character vectors to factor vectors
    # by default; turn this off by setting stringsAsFactors = FALSE when
    # you create the data.frame
    ?data.frame

    # There are many twisty ways to subset data frames, all subtly unalike
    students$year   # 3  2  2  1  0 -1
    students[,2]    # 3  2  2  1  0 -1
    students[,"year"]   # 3  2  2  1  0 -1

    # An augmented version of the data.frame structure is the data.table
    # If you're working with huge or panel data, or need to merge a few data
    # sets, data.table can be a good choice. Here's a whirlwind tour:
    install.packages("data.table") # download the package from CRAN
    require(data.table) # load it
    students <- as.data.table(students)
    students # note the slightly different print-out
    # =>
    #      name year house
    # 1: Cedric    3     H
    # 2:   Fred    2     G
    # 3: George    2     G
    # 4:    Cho    1     R
    # 5:  Draco    0     S
    # 6:  Ginny   -1     G
    students[name=="Ginny"] # get rows with name == "Ginny"
    # =>
    #     name year house
    # 1: Ginny   -1     G
    students[year==2] # get rows with year == 2
    # =>
    #      name year house
    # 1:   Fred    2     G
    # 2: George    2     G
    # data.table makes merging two data sets easy
    # let's make another data.table to merge with students
    founders <- data.table(house=c("G","H","R","S"),
                           founder=c("Godric","Helga","Rowena","Salazar"))
    founders
    # =>
    #    house founder
    # 1:     G  Godric
    # 2:     H   Helga
    # 3:     R  Rowena
    # 4:     S Salazar
    setkey(students, house)
    setkey(founders, house)
    students <- founders[students] # merge the two data sets by matching "house"
    setnames(students, c("house","houseFounderName","studentName","year"))
    students[,order(c("name","year","house","houseFounderName")), with=F]
    # =>
    #    studentName year house houseFounderName
    # 1:        Fred    2     G           Godric
    # 2:      George    2     G           Godric
    # 3:       Ginny   -1     G           Godric
    # 4:      Cedric    3     H            Helga
    # 5:         Cho    1     R           Rowena
    # 6:       Draco    0     S          Salazar

    # data.table makes summary tables easy
    students[,sum(year),by=house]
    # =>
    #    house V1
    # 1:     G  3
    # 2:     H  3
    # 3:     R  1
    # 4:     S  0

    # To drop a column from a data.frame or data.table,
    # assign it the NULL value
    students$houseFounderName <- NULL
    students
    # =>
    #    studentName year house
    # 1:        Fred    2     G
    # 2:      George    2     G
    # 3:       Ginny   -1     G
    # 4:      Cedric    3     H
    # 5:         Cho    1     R
    # 6:       Draco    0     S

    # Drop a row by subsetting
    # Using data.table:
    students[studentName != "Draco"]
    # =>
    #    house studentName year
    # 1:     G        Fred    2
    # 2:     G      George    2
    # 3:     G       Ginny   -1
    # 4:     H      Cedric    3
    # 5:     R         Cho    1
    # Using data.frame:
    students <- as.data.frame(students)
    students[students$house != "G",]
    # =>
    #   house houseFounderName studentName year
    # 4     H            Helga      Cedric    3
    # 5     R           Rowena         Cho    1
    # 6     S          Salazar       Draco    0

    # MULTI-DIMENSIONAL (ALL ELEMENTS OF ONE TYPE)

    # Arrays creates n-dimensional tables
    # All elements must be of the same type
    # You can make a two-dimensional table (sort of like a matrix)
    array(c(c(1,2,4,5),c(8,9,3,6)), dim=c(2,4))
    # =>
    #      [,1] [,2] [,3] [,4]
    # [1,]    1    4    8    3
    # [2,]    2    5    9    6
    # You can use array to make three-dimensional matrices too
    array(c(c(c(2,300,4),c(8,9,0)),c(c(5,60,0),c(66,7,847))), dim=c(3,2,2))
    # =>
    # , , 1
    #
    #      [,1] [,2]
    # [1,]    2    8
    # [2,]  300    9
    # [3,]    4    0
    #
    # , , 2
    #
    #      [,1] [,2]
    # [1,]    5   66
    # [2,]   60    7
    # [3,]    0  847

    # LISTS (MULTI-DIMENSIONAL, POSSIBLY RAGGED, OF DIFFERENT TYPES)

    # Finally, R has lists (of vectors)
    list1 <- list(time = 1:40)
    list1$price = c(rnorm(40,.5*list1$time,4)) # random
    list1
    # You can get items in the list like so
    list1$time # one way
    list1[["time"]] # another way
    list1[[1]] # yet another way
    # =>
    #  [1]  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33
    # [34] 34 35 36 37 38 39 40
    # You can subset list items like any other vector
    list1$price[4]

    # Lists are not the most efficient data structure to work with in R;
    # unless you have a very good reason, you should stick to data.frames
    # Lists are often returned by functions that perform linear regressions

    ##################################################
    # The apply() family of functions
    ##################################################

    # Remember mat?
    mat
    # =>
    #      [,1] [,2]
    # [1,]    1    4
    # [2,]    2    5
    # [3,]    3    6
    # Use apply(X, MARGIN, FUN) to apply function FUN to a matrix X
    # over rows (MAR = 1) or columns (MAR = 2)
    # That is, R does FUN to each row (or column) of X, much faster than a
    # for or while loop would do
    apply(mat, MAR = 2, jiggle)
    # =>
    #      [,1] [,2]
    # [1,]    3   15
    # [2,]    7   19
    # [3,]   11   23
    # Other functions: ?lapply, ?sapply

    # Don't feel too intimidated; everyone agrees they are rather confusing

    # The plyr package aims to replace (and improve upon!) the *apply() family.
    install.packages("plyr")
    require(plyr)
    ?plyr



    #########################
    # Loading data
    #########################

    # "pets.csv" is a file on the internet
    # (but it could just as easily be be a file on your own computer)
    pets <- read.csv("http://learnxinyminutes.com/docs/pets.csv")
    pets
    head(pets, 2) # first two rows
    tail(pets, 1) # last row

    # To save a data frame or matrix as a .csv file
    write.csv(pets, "pets2.csv") # to make a new .csv file
    # set working directory with setwd(), look it up with getwd()

    # Try ?read.csv and ?write.csv for more information



    #########################
    # Statistical Analysis
    #########################

    # Linear regression!
    linearModel <- lm(price  ~ time, data = list1)
    linearModel # outputs result of regression
    # =>
    # Call:
    # lm(formula = price ~ time, data = list1)
    #
    # Coefficients:
    # (Intercept)         time
    #      0.1453       0.4943
    summary(linearModel) # more verbose output from the regression
    # =>
    # Call:
    # lm(formula = price ~ time, data = list1)
    #
    # Residuals:
    #     Min      1Q  Median      3Q     Max
    # -8.3134 -3.0131 -0.3606  2.8016 10.3992
    #
    # Coefficients:
    #             Estimate Std. Error t value Pr(>|t|)
    # (Intercept)  0.14527    1.50084   0.097    0.923
    # time         0.49435    0.06379   7.749 2.44e-09 ***
    # ---
    # Signif. codes:  0 ‘***’ 0.001 ‘**’ 0.01 ‘*’ 0.05 ‘.’ 0.1 ‘ ’ 1
    #
    # Residual standard error: 4.657 on 38 degrees of freedom
    # Multiple R-squared:  0.6124,  Adjusted R-squared:  0.6022
    # F-statistic: 60.05 on 1 and 38 DF,  p-value: 2.44e-09
    coef(linearModel) # extract estimated parameters
    # =>
    # (Intercept)        time
    #   0.1452662   0.4943490
    summary(linearModel)$coefficients # another way to extract results
    # =>
    #              Estimate Std. Error    t value     Pr(>|t|)
    # (Intercept) 0.1452662 1.50084246 0.09678975 9.234021e-01
    # time        0.4943490 0.06379348 7.74920901 2.440008e-09
    summary(linearModel)$coefficients[,4] # the p-values
    # =>
    #  (Intercept)         time
    # 9.234021e-01 2.440008e-09

    # GENERAL LINEAR MODELS
    # Logistic regression
    set.seed(1)
    list1$success = rbinom(length(list1$time), 1, .5) # random binary
    glModel <- glm(success  ~ time, data = list1,
        family=binomial(link="logit"))
    glModel # outputs result of logistic regression
    # =>
    # Call:  glm(formula = success ~ time,
    #   family = binomial(link = "logit"), data = list1)
    #
    # Coefficients:
    # (Intercept)         time
    #     0.17018     -0.01321
    #
    # Degrees of Freedom: 39 Total (i.e. Null);  38 Residual
    # Null Deviance:        55.35
    # Residual Deviance: 55.12   AIC: 59.12
    summary(glModel) # more verbose output from the regression
    # =>
    # Call:
    # glm(formula = success ~ time,
    #   family = binomial(link = "logit"), data = list1)

    # Deviance Residuals:
    #    Min      1Q  Median      3Q     Max
    # -1.245  -1.118  -1.035   1.202   1.327
    #
    # Coefficients:
    #             Estimate Std. Error z value Pr(>|z|)
    # (Intercept)  0.17018    0.64621   0.263    0.792
    # time        -0.01321    0.02757  -0.479    0.632
    #
    # (Dispersion parameter for binomial family taken to be 1)
    #
    #     Null deviance: 55.352  on 39  degrees of freedom
    # Residual deviance: 55.121  on 38  degrees of freedom
    # AIC: 59.121
    #
    # Number of Fisher Scoring iterations: 3


    #########################
    # Plots
    #########################

    # BUILT-IN PLOTTING FUNCTIONS
    # Scatterplots!
    plot(list1$time, list1$price, main = "fake data")
    # Plot regression line on existing plot
    abline(linearModel, col = "red")
    # Get a variety of nice diagnostics
    plot(linearModel)
    # Histograms!
    hist(rpois(n = 10000, lambda = 5), col = "thistle")
    # Barplots!
    barplot(c(1,4,5,1,2), names.arg = c("red","blue","purple","green","yellow"))

    # GGPLOT2
    # But these are not even the prettiest of R's plots
    # Try the ggplot2 package for more and better graphics
    install.packages("ggplot2")
    require(ggplot2)
    ?ggplot2
    pp <- ggplot(students, aes(x=house))
    pp + geom_histogram()
    ll <- as.data.table(list1)
    pp <- ggplot(ll, aes(x=time,price))
    pp + geom_point()
    # ggplot2 has excellent documentation (available http://docs.ggplot2.org/current/)
    ```

Bash -<

:   ```bash
    #!/bin/bash
    # First line of the script is shebang which tells the system how to execute
    # the script: http://en.wikipedia.org/wiki/Shebang_(Unix)
    # As you already figured, comments start with #. Shebang is also a comment.

    # Simple hello world example:
    echo Hello world!

    # Each command starts on a new line, or after semicolon:
    echo 'This is the first line'; echo 'This is the second line'

    # Declaring a variable looks like this:
    Variable="Some string"

    # But not like this:
    Variable = "Some string"
    # Bash will decide that Variable is a command it must execute and give an error
    # because it can't be found.

    # Or like this:
    Variable= 'Some string'
    # Bash will decide that 'Some string' is a command it must execute and give an
    # error because it can't be found. (In this case the 'Variable=' part is seen
    # as a variable assignment valid only for the scope of the 'Some string'
    # command.)

    # Using the variable:
    echo $Variable
    echo "$Variable"
    echo '$Variable'
    # When you use the variable itself — assign it, export it, or else — you write
    # its name without $. If you want to use the variable's value, you should use $.
    # Note that ' (single quote) won't expand the variables!

    # Parameter expansion ${ }:
    echo ${Variable}
    # This is a simple usage of parameter expansion
    # Parameter Expansion gets a value from a variable.  It "expands" or prints the value
    # During the expansion time the value or parameter are able to be modified
    # Below are other modifications that add onto this expansion

    # String substitution in variables
    echo ${Variable/Some/A}
    # This will substitute the first occurrence of "Some" with "A"

    # Substring from a variable
    Length=7
    echo ${Variable:0:Length}
    # This will return only the first 7 characters of the value

    # Default value for variable
    echo ${Foo:-"DefaultValueIfFooIsMissingOrEmpty"}
    # This works for null (Foo=) and empty string (Foo=""); zero (Foo=0) returns 0.
    # Note that it only returns default value and doesn't change variable value.

    # Brace Expansion { }
    # Used to generate arbitrary strings
    echo {1..10}
    echo {a..z}
    # This will output the range from the start value to the end value

    # Builtin variables:
    # There are some useful builtin variables, like
    echo "Last program's return value: $?"
    echo "Script's PID: $$"
    echo "Number of arguments passed to script: $#"
    echo "All arguments passed to script: $@"
    echo "Script's arguments separated into different variables: $1 $2..."

    # Now that we know how to echo and use variables,
    # let's learn some of the other basics of bash!

    # Getting our current directory is available through the command `pwd`.
    # `pwd` stands for "print working directory".
    # We can also use the builtin variable `$PWD`.
    # Observer that the following are equivalent:
    echo "I'm in $(pwd)" # execs `pwd` and interpolates output
    echo "I'm in $PWD" # interpolates the variable

    # If you get too much output in your terminal, or from a script, the command
    # `clear` clears your screen
    clear
    # Ctrl-L also works for clearing output

    # Reading a value from input:
    echo "What's your name?"
    read Name # Note that we didn't need to declare a new variable
    echo Hello, $Name!

    # We have the usual if structure:
    # use 'man test' for more info about conditionals
    if [ $Name != $USER ]
    then
        echo "Your name isn't your username"
    else
        echo "Your name is your username"
    fi

    # NOTE: if $Name is empty, bash sees the above condition as:
    if [ != $USER ]
    # which is invalid syntax
    # so the "safe" way to use potentially empty variables in bash is:
    if [ "$Name" != $USER ] ...
    # which, when $Name is empty, is seen by bash as:
    if [ "" != $USER ] ...
    # which works as expected

    # There is also conditional execution
    echo "Always executed" || echo "Only executed if first command fails"
    echo "Always executed" && echo "Only executed if first command does NOT fail"

    # To use && and || with if statements, you need multiple pairs of square brackets:
    if [ "$Name" == "Steve" ] && [ "$Age" -eq 15 ]
    then
        echo "This will run if $Name is Steve AND $Age is 15."
    fi

    if [ "$Name" == "Daniya" ] || [ "$Name" == "Zach" ]
    then
        echo "This will run if $Name is Daniya OR Zach."
    fi

    # Expressions are denoted with the following format:
    echo $(( 10 + 5 ))

    # Unlike other programming languages, bash is a shell so it works in the context
    # of a current directory. You can list files and directories in the current
    # directory with the ls command:
    ls

    # These commands have options that control their execution:
    ls -l # Lists every file and directory on a separate line
    ls -t # Sort the directory contents by last-modified date (descending)
    ls -R # Recursively `ls` this directory and all of its subdirectories

    # Results of the previous command can be passed to the next command as input.
    # grep command filters the input with provided patterns. That's how we can list
    # .txt files in the current directory:
    ls -l | grep "\.txt"

    # Use `cat` to print files to stdout:
    cat file.txt

    # We can also read the file using `cat`:
    Contents=$(cat file.txt)
    echo "START OF FILE\n$Contents\nEND OF FILE"

    # Use `cp` to copy files or directories from one place to another.
    # `cp` creates NEW versions of the sources,
    # so editing the copy won't affect the original (and vice versa).
    # Note that it will overwrite the destination if it already exists.
    cp srcFile.txt clone.txt
    cp -r srcDirectory/ dst/ # recursively copy

    # Look into `scp` or `sftp` if you plan on exchanging files between computers.
    # `scp` behaves very similarly to `cp`.
    # `sftp` is more interactive.

    # Use `mv` to move files or directories from one place to another.
    # `mv` is similar to `cp`, but it deletes the source.
    # `mv` is also useful for renaming files!
    mv s0urc3.txt dst.txt # sorry, l33t hackers...

    # Since bash works in the context of a current directory, you might want to
    # run your command in some other directory. We have cd for changing location:
    cd ~    # change to home directory
    cd ..   # go up one directory
            # (^^say, from /home/username/Downloads to /home/username)
    cd /home/username/Documents   # change to specified directory
    cd ~/Documents/..    # still in home directory..isn't it??

    # Use subshells to work across directories
    (echo "First, I'm here: $PWD") && (cd someDir; echo "Then, I'm here: $PWD")
    pwd # still in first directory

    # Use `mkdir` to create new directories.
    mkdir myNewDir
    # The `-p` flag causes new intermediate directories to be created as necessary.
    mkdir -p myNewDir/with/intermediate/directories

    # You can redirect command input and output (stdin, stdout, and stderr).
    # Read from stdin until ^EOF$ and overwrite hello.py with the lines
    # between "EOF":
    cat > hello.py << EOF
    #!/usr/bin/env python
    from __future__ import print_function
    import sys
    print("#stdout", file=sys.stdout)
    print("#stderr", file=sys.stderr)
    for line in sys.stdin:
        print(line, file=sys.stdout)
    EOF

    # Run hello.py with various stdin, stdout, and stderr redirections:
    python hello.py < "input.in"
    python hello.py > "output.out"
    python hello.py 2> "error.err"
    python hello.py > "output-and-error.log" 2>&1
    python hello.py > /dev/null 2>&1
    # The output error will overwrite the file if it exists,
    # if you want to append instead, use ">>":
    python hello.py >> "output.out" 2>> "error.err"

    # Overwrite output.out, append to error.err, and count lines:
    info bash 'Basic Shell Features' 'Redirections' > output.out 2>> error.err
    wc -l output.out error.err

    # Run a command and print its file descriptor (e.g. /dev/fd/123)
    # see: man fd
    echo <(echo "#helloworld")

    # Overwrite output.out with "#helloworld":
    cat > output.out <(echo "#helloworld")
    echo "#helloworld" > output.out
    echo "#helloworld" | cat > output.out
    echo "#helloworld" | tee output.out >/dev/null

    # Cleanup temporary files verbosely (add '-i' for interactive)
    # WARNING: `rm` commands cannot be undone
    rm -v output.out error.err output-and-error.log
    rm -r tempDir/ # recursively delete

    # Commands can be substituted within other commands using $( ):
    # The following command displays the number of files and directories in the
    # current directory.
    echo "There are $(ls | wc -l) items here."

    # The same can be done using backticks `` but they can't be nested - the preferred way
    # is to use $( ).
    echo "There are `ls | wc -l` items here."

    # Bash uses a case statement that works similarly to switch in Java and C++:
    case "$Variable" in
        #List patterns for the conditions you want to meet
        0) echo "There is a zero.";;
        1) echo "There is a one.";;
        *) echo "It is not null.";;
    esac

    # for loops iterate for as many arguments given:
    # The contents of $Variable is printed three times.
    for Variable in {1..3}
    do
        echo "$Variable"
    done

    # Or write it the "traditional for loop" way:
    for ((a=1; a <= 3; a++))
    do
        echo $a
    done

    # They can also be used to act on files..
    # This will run the command 'cat' on file1 and file2
    for Variable in file1 file2
    do
        cat "$Variable"
    done

    # ..or the output from a command
    # This will cat the output from ls.
    for Output in $(ls)
    do
        cat "$Output"
    done

    # while loop:
    while [ true ]
    do
        echo "loop body here..."
        break
    done

    # You can also define functions
    # Definition:
    function foo ()
    {
        echo "Arguments work just like script arguments: $@"
        echo "And: $1 $2..."
        echo "This is a function"
        return 0
    }

    # or simply
    bar ()
    {
        echo "Another way to declare functions!"
        return 0
    }

    # Calling your function
    foo "My name is" $Name

    # There are a lot of useful commands you should learn:
    # prints last 10 lines of file.txt
    tail -n 10 file.txt
    # prints first 10 lines of file.txt
    head -n 10 file.txt
    # sort file.txt's lines
    sort file.txt
    # report or omit repeated lines, with -d it reports them
    uniq -d file.txt
    # prints only the first column before the ',' character
    cut -d ',' -f 1 file.txt
    # replaces every occurrence of 'okay' with 'great' in file.txt, (regex compatible)
    sed -i 's/okay/great/g' file.txt
    # print to stdout all lines of file.txt which match some regex
    # The example prints lines which begin with "foo" and end in "bar"
    grep "^foo.*bar$" file.txt
    # pass the option "-c" to instead print the number of lines matching the regex
    grep -c "^foo.*bar$" file.txt
    # Other useful options are:
    grep -r "^foo.*bar$" someDir/ # recursively `grep`
    grep -n "^foo.*bar$" file.txt # give line numbers
    grep -rI "^foo.*bar$" someDir/ # recursively `grep`, but ignore binary files
    # perform the same initial search, but filter out the lines containing "baz"
    grep "^foo.*bar$" file.txt | grep -v "baz"

    # if you literally want to search for the string,
    # and not the regex, use fgrep (or grep -F)
    fgrep "foobar" file.txt

    # trap command allows you to execute a command when a signal is received by your script.
    # Here trap command will execute rm if any one of the three listed signals is received.
    trap "rm $TEMP_FILE; exit" SIGHUP SIGINT SIGTERM

    # `sudo` is used to perform commands as the superuser
    $NAME1=$(whoami)
    $NAME2=$(sudo whoami)
    echo "Was $NAME1, then became more powerful $NAME2"

    # Read Bash shell builtins documentation with the bash 'help' builtin:
    help
    help help
    help for
    help return
    help source
    help .

    # Read Bash manpage documentation with man
    apropos bash
    man 1 bash
    man bash

    # Read info documentation with info (? for help)
    apropos info | grep '^info.*('
    man info
    info info
    info 5 info

    # Read bash info documentation:
    info bash
    info bash 'Bash Features'
    info bash 6
    info --apropos bash
    ```

JavaScript -<

:   ```cpp
    // Single-line comments start with two slashes.
    /* Multiline comments start with slash-star,
       and end with star-slash */

    // Statements can be terminated by ;
    doStuff();

    // ... but they don't have to be, as semicolons are automatically inserted
    // wherever there's a newline, except in certain cases.
    doStuff()

    // Because those cases can cause unexpected results, we'll keep on using
    // semicolons in this guide.

    ///////////////////////////////////
    // 1. Numbers, Strings and Operators

    // JavaScript has one number type (which is a 64-bit IEEE 754 double).
    // Doubles have a 52-bit mantissa, which is enough to store integers
    // up to about 9✕10¹⁵ precisely.
    3; // = 3
    1.5; // = 1.5

    // Some basic arithmetic works as you'd expect.
    1 + 1; // = 2
    0.1 + 0.2; // = 0.30000000000000004
    8 - 1; // = 7
    10 * 2; // = 20
    35 / 5; // = 7

    // Including uneven division.
    5 / 2; // = 2.5

    // And modulo division.
    10 % 2; // = 0
    30 % 4; // = 2
    18.5 % 7; // = 4.5

    // Bitwise operations also work; when you perform a bitwise operation your float
    // is converted to a signed int *up to* 32 bits.
    1 << 2; // = 4

    // Precedence is enforced with parentheses.
    (1 + 3) * 2; // = 8

    // There are three special not-a-real-number values:
    Infinity; // result of e.g. 1/0
    -Infinity; // result of e.g. -1/0
    NaN; // result of e.g. 0/0, stands for 'Not a Number'

    // There's also a boolean type.
    true;
    false;

    // Strings are created with ' or ".
    'abc';
    "Hello, world";

    // Negation uses the ! symbol
    !true; // = false
    !false; // = true

    // Equality is ===
    1 === 1; // = true
    2 === 1; // = false

    // Inequality is !==
    1 !== 1; // = false
    2 !== 1; // = true

    // More comparisons
    1 < 10; // = true
    1 > 10; // = false
    2 <= 2; // = true
    2 >= 2; // = true

    // Strings are concatenated with +
    "Hello " + "world!"; // = "Hello world!"

    // ... which works with more than just strings
    "1, 2, " + 3; // = "1, 2, 3"
    "Hello " + ["world", "!"] // = "Hello world,!"

    // and are compared with < and >
    "a" < "b"; // = true

    // Type coercion is performed for comparisons with double equals...
    "5" == 5; // = true
    null == undefined; // = true

    // ...unless you use ===
    "5" === 5; // = false
    null === undefined; // = false

    // ...which can result in some weird behaviour...
    13 + !0; // 14
    "13" + !0; // '13true'

    // You can access characters in a string with `charAt`
    "This is a string".charAt(0);  // = 'T'

    // ...or use `substring` to get larger pieces.
    "Hello world".substring(0, 5); // = "Hello"

    // `length` is a property, so don't use ().
    "Hello".length; // = 5

    // There's also `null` and `undefined`.
    null;      // used to indicate a deliberate non-value
    undefined; // used to indicate a value is not currently present (although
               // `undefined` is actually a value itself)

    // false, null, undefined, NaN, 0 and "" are falsy; everything else is truthy.
    // Note that 0 is falsy and "0" is truthy, even though 0 == "0".

    ///////////////////////////////////
    // 2. Variables, Arrays and Objects

    // Variables are declared with the `var` keyword. JavaScript is dynamically
    // typed, so you don't need to specify type. Assignment uses a single `=`
    // character.
    var someVar = 5;

    // If you leave the var keyword off, you won't get an error...
    someOtherVar = 10;

    // ...but your variable will be created in the global scope, not in the scope
    // you defined it in.

    // Variables declared without being assigned to are set to undefined.
    var someThirdVar; // = undefined

    // If you want to declare a couple of variables, then you could use a comma
    // separator
    var someFourthVar = 2, someFifthVar = 4;

    // There's shorthand for performing math operations on variables:
    someVar += 5; // equivalent to someVar = someVar + 5; someVar is 10 now
    someVar *= 10; // now someVar is 100

    // and an even-shorter-hand for adding or subtracting 1
    someVar++; // now someVar is 101
    someVar--; // back to 100

    // Arrays are ordered lists of values, of any type.
    var myArray = ["Hello", 45, true];

    // Their members can be accessed using the square-brackets subscript syntax.
    // Array indices start at zero.
    myArray[1]; // = 45

    // Arrays are mutable and of variable length.
    myArray.push("World");
    myArray.length; // = 4

    // Add/Modify at specific index
    myArray[3] = "Hello";

    // JavaScript's objects are equivalent to "dictionaries" or "maps" in other
    // languages: an unordered collection of key-value pairs.
    var myObj = {key1: "Hello", key2: "World"};

    // Keys are strings, but quotes aren't required if they're a valid
    // JavaScript identifier. Values can be any type.
    var myObj = {myKey: "myValue", "my other key": 4};

    // Object attributes can also be accessed using the subscript syntax,
    myObj["my other key"]; // = 4

    // ... or using the dot syntax, provided the key is a valid identifier.
    myObj.myKey; // = "myValue"

    // Objects are mutable; values can be changed and new keys added.
    myObj.myThirdKey = true;

    // If you try to access a value that's not yet set, you'll get undefined.
    myObj.myFourthKey; // = undefined

    ///////////////////////////////////
    // 3. Logic and Control Structures

    // The `if` structure works as you'd expect.
    var count = 1;
    if (count == 3){
        // evaluated if count is 3
    } else if (count == 4){
        // evaluated if count is 4
    } else {
        // evaluated if it's not either 3 or 4
    }

    // As does `while`.
    while (true){
        // An infinite loop!
    }

    // Do-while loops are like while loops, except they always run at least once.
    var input;
    do {
        input = getInput();
    } while (!isValid(input))

    // The `for` loop is the same as C and Java:
    // initialisation; continue condition; iteration.
    for (var i = 0; i < 5; i++){
        // will run 5 times
    }

    // The for/in statement iterates over every property across the entire prototype chain.
    var description = "";
    var person = {fname:"Paul", lname:"Ken", age:18};
    for (var x in person){
        description += person[x] + " ";
    }

    // To only consider properties attached to the object itself
    // and not its prototypes, use the `hasOwnProperty()` check.
    var description = "";
    var person = {fname:"Paul", lname:"Ken", age:18};
    for (var x in person){
        if (person.hasOwnProperty(x)){
            description += person[x] + " ";
        }
    }

    // For/in should not be used to iterate over an Array where the index order
    // is important, as there is no guarantee that for/in will return the indexes
    // in any particular order.

    // && is logical and, || is logical or
    if (house.size == "big" && house.colour == "blue"){
        house.contains = "bear";
    }
    if (colour == "red" || colour == "blue"){
        // colour is either red or blue
    }

    // && and || "short circuit", which is useful for setting default values.
    var name = otherName || "default";


    // The `switch` statement checks for equality with `===`.
    // Use 'break' after each case
    // or the cases after the correct one will be executed too.
    grade = 'B';
    switch (grade) {
      case 'A':
        console.log("Great job");
        break;
      case 'B':
        console.log("OK job");
        break;
      case 'C':
        console.log("You can do better");
        break;
      default:
        console.log("Oy vey");
        break;
    }


    ///////////////////////////////////
    // 4. Functions, Scope and Closures

    // JavaScript functions are declared with the `function` keyword.
    function myFunction(thing){
        return thing.toUpperCase();
    }
    myFunction("foo"); // = "FOO"

    // Note that the value to be returned must start on the same line as the
    // `return` keyword, otherwise you'll always return `undefined` due to
    // automatic semicolon insertion. Watch out for this when using Allman style.
    function myFunction(){
        return // <- semicolon automatically inserted here
        {thisIsAn: 'object literal'}
    }
    myFunction(); // = undefined

    // JavaScript functions are first class objects, so they can be reassigned to
    // different variable names and passed to other functions as arguments - for
    // example, when supplying an event handler:
    function myFunction(){
        // this code will be called in 5 seconds' time
    }
    setTimeout(myFunction, 5000);
    // Note: setTimeout isn't part of the JS language, but is provided by browsers
    // and Node.js.

    // Another function provided by browsers is setInterval
    function myFunction(){
        // this code will be called every 5 seconds
    }
    setInterval(myFunction, 5000);

    // Function objects don't even have to be declared with a name - you can write
    // an anonymous function definition directly into the arguments of another.
    setTimeout(function(){
        // this code will be called in 5 seconds' time
    }, 5000);

    // JavaScript has function scope; functions get their own scope but other blocks
    // do not.
    if (true){
        var i = 5;
    }
    i; // = 5 - not undefined as you'd expect in a block-scoped language

    // This has led to a common pattern of "immediately-executing anonymous
    // functions", which prevent temporary variables from leaking into the global
    // scope.
    (function(){
        var temporary = 5;
        // We can access the global scope by assigning to the "global object", which
        // in a web browser is always `window`. The global object may have a
        // different name in non-browser environments such as Node.js.
        window.permanent = 10;
    })();
    temporary; // raises ReferenceError
    permanent; // = 10

    // One of JavaScript's most powerful features is closures. If a function is
    // defined inside another function, the inner function has access to all the
    // outer function's variables, even after the outer function exits.
    function sayHelloInFiveSeconds(name){
        var prompt = "Hello, " + name + "!";
        // Inner functions are put in the local scope by default, as if they were
        // declared with `var`.
        function inner(){
            alert(prompt);
        }
        setTimeout(inner, 5000);
        // setTimeout is asynchronous, so the sayHelloInFiveSeconds function will
        // exit immediately, and setTimeout will call inner afterwards. However,
        // because inner is "closed over" sayHelloInFiveSeconds, inner still has
        // access to the `prompt` variable when it is finally called.
    }
    sayHelloInFiveSeconds("Adam"); // will open a popup with "Hello, Adam!" in 5s

    ///////////////////////////////////
    // 5. More about Objects; Constructors and Prototypes

    // Objects can contain functions.
    var myObj = {
        myFunc: function(){
            return "Hello world!";
        }
    };
    myObj.myFunc(); // = "Hello world!"

    // When functions attached to an object are called, they can access the object
    // they're attached to using the `this` keyword.
    myObj = {
        myString: "Hello world!",
        myFunc: function(){
            return this.myString;
        }
    };
    myObj.myFunc(); // = "Hello world!"

    // What this is set to has to do with how the function is called, not where
    // it's defined. So, our function doesn't work if it isn't called in the
    // context of the object.
    var myFunc = myObj.myFunc;
    myFunc(); // = undefined

    // Inversely, a function can be assigned to the object and gain access to it
    // through `this`, even if it wasn't attached when it was defined.
    var myOtherFunc = function(){
        return this.myString.toUpperCase();
    }
    myObj.myOtherFunc = myOtherFunc;
    myObj.myOtherFunc(); // = "HELLO WORLD!"

    // We can also specify a context for a function to execute in when we invoke it
    // using `call` or `apply`.

    var anotherFunc = function(s){
        return this.myString + s;
    }
    anotherFunc.call(myObj, " And Hello Moon!"); // = "Hello World! And Hello Moon!"

    // The `apply` function is nearly identical, but takes an array for an argument
    // list.

    anotherFunc.apply(myObj, [" And Hello Sun!"]); // = "Hello World! And Hello Sun!"

    // This is useful when working with a function that accepts a sequence of
    // arguments and you want to pass an array.

    Math.min(42, 6, 27); // = 6
    Math.min([42, 6, 27]); // = NaN (uh-oh!)
    Math.min.apply(Math, [42, 6, 27]); // = 6

    // But, `call` and `apply` are only temporary. When we want it to stick, we can
    // use `bind`.

    var boundFunc = anotherFunc.bind(myObj);
    boundFunc(" And Hello Saturn!"); // = "Hello World! And Hello Saturn!"

    // `bind` can also be used to partially apply (curry) a function.

    var product = function(a, b){ return a * b; }
    var doubler = product.bind(this, 2);
    doubler(8); // = 16

    // When you call a function with the `new` keyword, a new object is created, and
    // made available to the function via the `this` keyword. Functions designed to be
    // called like that are called constructors.

    var MyConstructor = function(){
        this.myNumber = 5;
    }
    myNewObj = new MyConstructor(); // = {myNumber: 5}
    myNewObj.myNumber; // = 5

    // Every JavaScript object has a 'prototype'. When you go to access a property
    // on an object that doesn't exist on the actual object, the interpreter will
    // look at its prototype.

    // Some JS implementations let you access an object's prototype on the magic
    // property `__proto__`. While this is useful for explaining prototypes it's not
    // part of the standard; we'll get to standard ways of using prototypes later.
    var myObj = {
        myString: "Hello world!"
    };
    var myPrototype = {
        meaningOfLife: 42,
        myFunc: function(){
            return this.myString.toLowerCase()
        }
    };

    myObj.__proto__ = myPrototype;
    myObj.meaningOfLife; // = 42

    // This works for functions, too.
    myObj.myFunc(); // = "hello world!"

    // Of course, if your property isn't on your prototype, the prototype's
    // prototype is searched, and so on.
    myPrototype.__proto__ = {
        myBoolean: true
    };
    myObj.myBoolean; // = true

    // There's no copying involved here; each object stores a reference to its
    // prototype. This means we can alter the prototype and our changes will be
    // reflected everywhere.
    myPrototype.meaningOfLife = 43;
    myObj.meaningOfLife; // = 43

    // We mentioned that `__proto__` was non-standard, and there's no standard way to
    // change the prototype of an existing object. However, there are two ways to
    // create a new object with a given prototype.

    // The first is Object.create, which is a recent addition to JS, and therefore
    // not available in all implementations yet.
    var myObj = Object.create(myPrototype);
    myObj.meaningOfLife; // = 43

    // The second way, which works anywhere, has to do with constructors.
    // Constructors have a property called prototype. This is *not* the prototype of
    // the constructor function itself; instead, it's the prototype that new objects
    // are given when they're created with that constructor and the new keyword.
    MyConstructor.prototype = {
        myNumber: 5,
        getMyNumber: function(){
            return this.myNumber;
        }
    };
    var myNewObj2 = new MyConstructor();
    myNewObj2.getMyNumber(); // = 5
    myNewObj2.myNumber = 6
    myNewObj2.getMyNumber(); // = 6

    // Built-in types like strings and numbers also have constructors that create
    // equivalent wrapper objects.
    var myNumber = 12;
    var myNumberObj = new Number(12);
    myNumber == myNumberObj; // = true

    // Except, they aren't exactly equivalent.
    typeof myNumber; // = 'number'
    typeof myNumberObj; // = 'object'
    myNumber === myNumberObj; // = false
    if (0){
        // This code won't execute, because 0 is falsy.
    }
    if (new Number(0)){
       // This code will execute, because wrapped numbers are objects, and objects
       // are always truthy.
    }

    // However, the wrapper objects and the regular builtins share a prototype, so
    // you can actually add functionality to a string, for instance.
    String.prototype.firstCharacter = function(){
        return this.charAt(0);
    }
    "abc".firstCharacter(); // = "a"

    // This fact is often used in "polyfilling", which is implementing newer
    // features of JavaScript in an older subset of JavaScript, so that they can be
    // used in older environments such as outdated browsers.

    // For instance, we mentioned that Object.create isn't yet available in all
    // implementations, but we can still use it with this polyfill:
    if (Object.create === undefined){ // don't overwrite it if it exists
        Object.create = function(proto){
            // make a temporary constructor with the right prototype
            var Constructor = function(){};
            Constructor.prototype = proto;
            // then use it to create a new, appropriately-prototyped object
            return new Constructor();
        }
    }
    ```

jQuery -<

:   ```javascript
    ///////////////////////////////////
    // 1. Selectors

    // Selectors in jQuery are used to select an element
    var page = $(window); // Selects the whole viewport

    // Selectors can also be CSS selector
    var paragraph = $('p'); // Selects all paragraph elements
    var table1 = $('#table1'); // Selects element with id 'table1'
    var squares = $('.square'); // Selects all elements with the class 'square'
    var square_p = $('p.square') // Selects paragraphs with the 'square' class


    ///////////////////////////////////
    // 2. Events and Effects

    // A very common event used is the ready event on the document
    // You can use the 'ready' method to wait until the element has finished loading
    $(document).ready(function(){
      // Code won't execute until the document is loaded
    });

    // jQuery is very good at triggering events
    // and also handling what happens when an event is triggered
    $('#button').click(); // Fires a click event on $('#button')
    $('#button').click(function(){
      // Code here gets executed when the #button element is clicked
    });

    function onAction() {
      // This is executed when the event is triggered
    }

    // Some other common events are:
    $('#btn').dblclick(onAction); // Double click
    $('#btn').hover(onAction); // Hovering over
    $('#btn').focus(onAction); // On focus
    $('#btn').blur(onAction); // Losses focus
    $('#btn').submit(onAction); // On submit
    $('#btn').select(onAction); // When an element is selected
    $('#btn').keydown(onAction); // When a key is pushed down
    $('#btn').keyup(onAction); // When a key is released
    $('#btn').keypress(onAction); // When a key is pressed
    $('#btn').mousemove(onAction); // When the mouse is moved
    $('#btn').mouseenter(onAction); // Mouse enters the element
    $('#btn').mouseleave(onAction); // Mouse leaves the element

    // You can also use an anonymous function
    $('#btn').hover(function(){
      // Executed on hover
    });

    // These can all also trigger the event instead of handling it
    // by simply not giving any parameters
    $('#btn').dblclick(); // Fires double click on the element

    // You can handle multiple events while only using the selector once
    $('#btn').on(
      {dblclick: myFunction1} // Triggered on double click
      {blur: myFunction1} // Triggered on blur
    );

    // You can move and hide elements with some effect methods
    $('.table').hide(); # Hides the element(s)

    // Note: calling a function in these methods will still hide the element
    $('.table').hide(function(){
        // Element hidden then function executed
    });

    // You can store selectors in variables
    var tables = $('.table');

    // Some basic document manipulation methods are:
    tables.hide(); // Hides element(s)
    tables.show(); // Shows (un-hides) element(s)
    tables.toggle(); // Changes the hide/show state
    tables.fadeOut(); // Fades out
    tables.fadeIn(); // Fades in
    tables.fadeToggle(); // Fades in or out
    tables.fadeTo(0.5); // Fades to an opacity (between 0 and 1)
    tables.slideUp(); // Slides up
    tables.slideDown(); // Slides down
    tables.slideToggle(); // Slides up or down

    // All of the above take a speed (milliseconds) and callback function
    tables.hide(1000, myFunction); // 1 second hide animation then function

    // fadeTo has a required opacity as its second parameter
    tables.fadeTo(2000, 0.1, myFunction); // 2 sec. fade to 0.1 opacity then function

    // You can get slightly more advanced with the animate method
    tables.animate({margin-top:"+=50", height: "100px"}, 500, myFunction);
    // The animate method takes an object of css and values to end with,
    // optional options parameter to tune the animation,
    // and of course the callback function

    ///////////////////////////////////
    // 3. Manipulation

    // These are similar to effects but can do more
    $('div').addClass('div') // Adds class div to all div taming-slim-20

    // Common manipulation methods
    $('p').append('Hello world'); // Adds to end of element
    $('p').attr('class'); // Gets attribute
    $('p').attr('class', 'content'); // Sets attribute
    $('p').hasClass('div'); // Returns true if it has the class
    $('p').height(); // Gets height of element or sets height


    // For many manipulation methods, getting info on an element
    // will ONLY get the first matching element
    $('p').height(); // Gets only the first 'p' tag's height

    // You can use each to loop through all the elements
    var heights = [];
    $('p').each(function() {
      heights.push($(this.height)); // Adds all 'p' tag heights to array
    });
    ```

PHP -<

:   ```php
    <?php // PHP code must be enclosed with <?php tags

    // If your php file only contains PHP code, it is best practice
    // to omit the php closing tag to prevent accidental output.

    // Two forward slashes start a one-line comment.

    # So will a hash (aka pound symbol) but // is more common

    /*
         Surrounding text in slash-asterisk and asterisk-slash
         makes it a multi-line comment.
    */

    // Use "echo" or "print" to print output
    print('Hello '); // Prints "Hello " with no line break

    // () are optional for print and echo
    echo "World\n"; // Prints "World" with a line break
    // (all statements must end with a semicolon)

    // Anything outside <?php tags is echoed automatically
    ?>
    Hello World Again!
    <?php


    /************************************
     * Types & Variables
     */

    // Variables begin with the $ symbol.
    // A valid variable name starts with a letter or underscore,
    // followed by any number of letters, numbers, or underscores.

    // Boolean values are case-insensitive
    $boolean = true;  // or TRUE or True
    $boolean = false; // or FALSE or False

    // Integers
    $int1 = 12;   // => 12
    $int2 = -12;  // => -12
    $int3 = 012;  // => 10 (a leading 0 denotes an octal number)
    $int4 = 0x0F; // => 15 (a leading 0x denotes a hex literal)
    // Binary integer literals are available since PHP 5.4.0.
    $int5 = 0b11111111; // 255 (a leading 0b denotes a binary number)

    // Floats (aka doubles)
    $float = 1.234;
    $float = 1.2e3;
    $float = 7E-10;

    // Delete variable
    unset($int1);

    // Arithmetic
    $sum        = 1 + 1; // 2
    $difference = 2 - 1; // 1
    $product    = 2 * 2; // 4
    $quotient   = 2 / 1; // 2

    // Shorthand arithmetic
    $number = 0;
    $number += 1;      // Increment $number by 1
    echo $number++;    // Prints 1 (increments after evaluation)
    echo ++$number;    // Prints 3 (increments before evaluation)
    $number /= $float; // Divide and assign the quotient to $number

    // Strings should be enclosed in single quotes;
    $sgl_quotes = '$String'; // => '$String'

    // Avoid using double quotes except to embed other variables
    $dbl_quotes = "This is a $sgl_quotes."; // => 'This is a $String.'

    // Special characters are only escaped in double quotes
    $escaped   = "This contains a \t tab character.";
    $unescaped = 'This just contains a slash and a t: \t';

    // Enclose a variable in curly braces if needed
    $apples = "I have {$number} apples to eat.";
    $oranges = "I have ${number} oranges to eat.";
    $money = "I have $${number} in the bank.";

    // Since PHP 5.3, nowdocs can be used for uninterpolated multi-liners
    $nowdoc = <<<'END'
    Multi line
    string
    END;

    // Heredocs will do string interpolation
    $heredoc = <<<END
    Multi line
    $sgl_quotes
    END;

    // String concatenation is done with .
    echo 'This string ' . 'is concatenated';

    // Strings can be passed in as parameters to echo
    echo 'Multiple', 'Parameters', 'Valid';  // Returns 'MultipleParametersValid'


    /********************************
     * Constants
     */

    // A constant is defined by using define()
    // and can never be changed during runtime!

    // a valid constant name starts with a letter or underscore,
    // followed by any number of letters, numbers, or underscores.
    define("FOO", "something");

    // access to a constant is possible by calling the choosen name without a $
    echo FOO; // Returns 'something'
    echo 'This outputs ' . FOO;  // Returns 'This ouputs something'



    /********************************
     * Arrays
     */

    // All arrays in PHP are associative arrays (hashmaps),

    // Associative arrays, known as hashmaps in some languages.

    // Works with all PHP versions
    $associative = array('One' => 1, 'Two' => 2, 'Three' => 3);

    // PHP 5.4 introduced a new syntax
    $associative = ['One' => 1, 'Two' => 2, 'Three' => 3];

    echo $associative['One']; // prints 1

    // Add an element to an associative array
    $associative['Four'] = 4;

    // List literals implicitly assign integer keys
    $array = ['One', 'Two', 'Three'];
    echo $array[0]; // => "One"

    // Add an element to the end of an array
    $array[] = 'Four';
    // or
    array_push($array, 'Five');

    // Remove element from array
    unset($array[3]);

    /********************************
     * Output
     */

    echo('Hello World!');
    // Prints Hello World! to stdout.
    // Stdout is the web page if running in a browser.

    print('Hello World!'); // The same as echo

    // echo and print are language constructs too, so you can drop the parentheses
    echo 'Hello World!';
    print 'Hello World!';

    $paragraph = 'paragraph';

    echo 100;        // Echo scalar variables directly
    echo $paragraph; // or variables

    // If short open tags are configured, or your PHP version is
    // 5.4.0 or greater, you can use the short echo syntax
    ?>
    <p><?= $paragraph ?></p>
    <?php

    $x = 1;
    $y = 2;
    $x = $y; // $x now contains the same value as $y
    $z = &$y;
    // $z now contains a reference to $y. Changing the value of
    // $z will change the value of $y also, and vice-versa.
    // $x will remain unchanged as the original value of $y

    echo $x; // => 2
    echo $z; // => 2
    $y = 0;
    echo $x; // => 2
    echo $z; // => 0

    // Dumps type and value of variable to stdout
    var_dump($z); // prints int(0)

    // Prints variable to stdout in human-readable format
    print_r($array); // prints: Array ( [0] => One [1] => Two [2] => Three )

    /********************************
     * Logic
     */
    $a = 0;
    $b = '0';
    $c = '1';
    $d = '1';

    // assert throws a warning if its argument is not true

    // These comparisons will always be true, even if the types aren't the same.
    assert($a == $b); // equality
    assert($c != $a); // inequality
    assert($c <> $a); // alternative inequality
    assert($a < $c);
    assert($c > $b);
    assert($a <= $b);
    assert($c >= $d);

    // The following will only be true if the values match and are the same type.
    assert($c === $d);
    assert($a !== $d);
    assert(1 === '1');
    assert(1 !== '1');

    // 'Spaceship' operator (since PHP 7)
    // Returns 0 if values on either side are equal
    // Returns 1 if value on the left is greater
    // Returns -1 if the value on the right is greater

    $a = 100;
    $b = 1000;

    echo $a <=> $a; // 0 since they are equal
    echo $a <=> $b; // -1 since $a < $b
    echo $b <=> $a; // 1 since $b > $a

    // Variables can be converted between types, depending on their usage.

    $integer = 1;
    echo $integer + $integer; // => 2

    $string = '1';
    echo $string + $string; // => 2 (strings are coerced to integers)

    $string = 'one';
    echo $string + $string; // => 0
    // Outputs 0 because the + operator cannot cast the string 'one' to a number

    // Type casting can be used to treat a variable as another type

    $boolean = (boolean) 1; // => true

    $zero = 0;
    $boolean = (boolean) $zero; // => false

    // There are also dedicated functions for casting most types
    $integer = 5;
    $string = strval($integer);

    $var = null; // Null value


    /********************************
     * Control Structures
     */

    if (true) {
        print 'I get printed';
    }

    if (false) {
        print 'I don\'t';
    } else {
        print 'I get printed';
    }

    if (false) {
        print 'Does not get printed';
    } elseif(true) {
        print 'Does';
    }

    // ternary operator
    print (false ? 'Does not get printed' : 'Does');

    // ternary shortcut operator since PHP 5.3
    // equivalent of "$x ? $x : 'Does'""
    $x = false;
    print($x ?: 'Does');

    // null coalesce operator since php 7
    $a = null;
    $b = 'Does print';
    echo $a ?? 'a is not set'; // prints 'a is not set'
    echo $b ?? 'b is not set'; // prints 'Does print'


    $x = 0;
    if ($x === '0') {
        print 'Does not print';
    } elseif($x == '1') {
        print 'Does not print';
    } else {
        print 'Does print';
    }



    // This alternative syntax is useful for templates:
    ?>

    <?php if ($x): ?>
    This is displayed if the test is truthy.
    <?php else: ?>
    This is displayed otherwise.
    <?php endif; ?>

    <?php

    // Use switch to save some logic.
    switch ($x) {
        case '0':
            print 'Switch does type coercion';
            break; // You must include a break, or you will fall through
                   // to cases 'two' and 'three'
        case 'two':
        case 'three':
            // Do something if $variable is either 'two' or 'three'
            break;
        default:
            // Do something by default
    }

    // While, do...while and for loops are probably familiar
    $i = 0;
    while ($i < 5) {
        echo $i++;
    }; // Prints "01234"

    echo "\n";

    $i = 0;
    do {
        echo $i++;
    } while ($i < 5); // Prints "01234"

    echo "\n";

    for ($x = 0; $x < 10; $x++) {
        echo $x;
    } // Prints "0123456789"

    echo "\n";

    $wheels = ['bicycle' => 2, 'car' => 4];

    // Foreach loops can iterate over arrays
    foreach ($wheels as $wheel_count) {
        echo $wheel_count;
    } // Prints "24"

    echo "\n";

    // You can iterate over the keys as well as the values
    foreach ($wheels as $vehicle => $wheel_count) {
        echo "A $vehicle has $wheel_count wheels";
    }

    echo "\n";

    $i = 0;
    while ($i < 5) {
        if ($i === 3) {
            break; // Exit out of the while loop
        }
        echo $i++;
    } // Prints "012"

    for ($i = 0; $i < 5; $i++) {
        if ($i === 3) {
            continue; // Skip this iteration of the loop
        }
        echo $i;
    } // Prints "0124"


    /********************************
     * Functions
     */

    // Define a function with "function":
    function my_function () {
        return 'Hello';
    }

    echo my_function(); // => "Hello"

    // A valid function name starts with a letter or underscore, followed by any
    // number of letters, numbers, or underscores.

    function add ($x, $y = 1) { // $y is optional and defaults to 1
        $result = $x + $y;
        return $result;
    }

    echo add(4); // => 5
    echo add(4, 2); // => 6

    // $result is not accessible outside the function
    // print $result; // Gives a warning.

    // Since PHP 5.3 you can declare anonymous functions;
    $inc = function ($x) {
        return $x + 1;
    };

    echo $inc(2); // => 3

    function foo ($x, $y, $z) {
        echo "$x - $y - $z";
    }

    // Functions can return functions
    function bar ($x, $y) {
        // Use 'use' to bring in outside variables
        return function ($z) use ($x, $y) {
            foo($x, $y, $z);
        };
    }

    $bar = bar('A', 'B');
    $bar('C'); // Prints "A - B - C"

    // You can call named functions using strings
    $function_name = 'add';
    echo $function_name(1, 2); // => 3
    // Useful for programatically determining which function to run.
    // Or, use call_user_func(callable $callback [, $parameter [, ... ]]);


    // You can get the all the parameters passed to a function
    function parameters() {
        $numargs = func_num_args();
        if ($numargs > 0) {
            echo func_get_arg(0) . ' | ';
        }
        $args_array = func_get_args();
        foreach ($args_array as $key => $arg) {
            echo $key . ' - ' . $arg . ' | ';
        }
    }

    parameters('Hello', 'World'); // Hello | 0 - Hello | 1 - World |

    // Since PHP 5.6 you can get a variable number of arguments
    function variable($word, ...$list) {
        echo $word . " || ";
        foreach ($list as $item) {
            echo $item . ' | ';
        }
    }

    variable("Separate", "Hello", "World") // Separate || Hello | World |

    /********************************
     * Includes
     */

    <?php
    // PHP within included files must also begin with a PHP open tag.

    include 'my-file.php';
    // The code in my-file.php is now available in the current scope.
    // If the file cannot be included (e.g. file not found), a warning is emitted.

    include_once 'my-file.php';
    // If the code in my-file.php has been included elsewhere, it will
    // not be included again. This prevents multiple class declaration errors

    require 'my-file.php';
    require_once 'my-file.php';
    // Same as include(), except require() will cause a fatal error if the
    // file cannot be included.

    // Contents of my-include.php:
    <?php

    return 'Anything you like.';
    // End file

    // Includes and requires may also return a value.
    $value = include 'my-include.php';

    // Files are included based on the file path given or, if none is given,
    // the include_path configuration directive. If the file isn't found in
    // the include_path, include will finally check in the calling script's
    // own directory and the current working directory before failing.
    /* */

    /********************************
     * Classes
     */

    // Classes are defined with the class keyword

    class MyClass
    {
        const MY_CONST      = 'value'; // A constant

        static $staticVar   = 'static';

        // Static variables and their visibility
        public static $publicStaticVar = 'publicStatic';
        // Accessible within the class only
        private static $privateStaticVar = 'privateStatic';
        // Accessible from the class and subclasses
        protected static $protectedStaticVar = 'protectedStatic';

        // Properties must declare their visibility
        public $property    = 'public';
        public $instanceProp;
        protected $prot = 'protected'; // Accessible from the class and subclasses
        private $priv   = 'private';   // Accessible within the class only

        // Create a constructor with __construct
        public function __construct($instanceProp) {
            // Access instance variables with $this
            $this->instanceProp = $instanceProp;
        }

        // Methods are declared as functions inside a class
        public function myMethod()
        {
            print 'MyClass';
        }

        // final keyword would make a function unoverridable
        final function youCannotOverrideMe()
        {
        }

        // Magic Methods

        // what to do if Object is treated as a String
        public function __toString() {
            return $property;
        }

        // opposite to __construct()
        // called when object is no longer referenced
        public function __destruct() {
            print "Destroying";
        }

    /*
     * Declaring class properties or methods as static makes them accessible without
     * needing an instantiation of the class. A property declared as static can not
     * be accessed with an instantiated class object (though a static method can).
     */

        public static function myStaticMethod()
        {
            print 'I am static';
        }
    }

    // Class constants can always be accessed statically
    echo MyClass::MY_CONST;    // Outputs 'value';

    echo MyClass::$staticVar;  // Outputs 'static';
    MyClass::myStaticMethod(); // Outputs 'I am static';

    // Instantiate classes using new
    $my_class = new MyClass('An instance property');
    // The parentheses are optional if not passing in an argument.

    // Access class members using ->
    echo $my_class->property;     // => "public"
    echo $my_class->instanceProp; // => "An instance property"
    $my_class->myMethod();        // => "MyClass"


    // Extend classes using "extends"
    class MyOtherClass extends MyClass
    {
        function printProtectedProperty()
        {
            echo $this->prot;
        }

        // Override a method
        function myMethod()
        {
            parent::myMethod();
            print ' > MyOtherClass';
        }
    }

    $my_other_class = new MyOtherClass('Instance prop');
    $my_other_class->printProtectedProperty(); // => Prints "protected"
    $my_other_class->myMethod();               // Prints "MyClass > MyOtherClass"

    final class YouCannotExtendMe
    {
    }

    // You can use "magic methods" to create getters and setters
    class MyMapClass
    {
        private $property;

        public function __get($key)
        {
            return $this->$key;
        }

        public function __set($key, $value)
        {
            $this->$key = $value;
        }
    }

    $x = new MyMapClass();
    echo $x->property; // Will use the __get() method
    $x->property = 'Something'; // Will use the __set() method

    // Classes can be abstract (using the abstract keyword) or
    // implement interfaces (using the implements keyword).
    // An interface is declared with the interface keyword.

    interface InterfaceOne
    {
        public function doSomething();
    }

    interface InterfaceTwo
    {
        public function doSomethingElse();
    }

    // interfaces can be extended
    interface InterfaceThree extends InterfaceTwo
    {
        public function doAnotherContract();
    }

    abstract class MyAbstractClass implements InterfaceOne
    {
        public $x = 'doSomething';
    }

    class MyConcreteClass extends MyAbstractClass implements InterfaceTwo
    {
        public function doSomething()
        {
            echo $x;
        }

        public function doSomethingElse()
        {
            echo 'doSomethingElse';
        }
    }


    // Classes can implement more than one interface
    class SomeOtherClass implements InterfaceOne, InterfaceTwo
    {
        public function doSomething()
        {
            echo 'doSomething';
        }

        public function doSomethingElse()
        {
            echo 'doSomethingElse';
        }
    }


    /********************************
     * Traits
     */

    // Traits are available from PHP 5.4.0 and are declared using "trait"

    trait MyTrait
    {
        public function myTraitMethod()
        {
            print 'I have MyTrait';
        }
    }

    class MyTraitfulClass
    {
        use MyTrait;
    }

    $cls = new MyTraitfulClass();
    $cls->myTraitMethod(); // Prints "I have MyTrait"


    /********************************
     * Namespaces
     */

    // This section is separate, because a namespace declaration
    // must be the first statement in a file. Let's pretend that is not the case

    <?php

    // By default, classes exist in the global namespace, and can
    // be explicitly called with a backslash.

    $cls = new \MyClass();



    // Set the namespace for a file
    namespace My\Namespace;

    class MyClass
    {
    }

    // (from another file)
    $cls = new My\Namespace\MyClass;

    //Or from within another namespace.
    namespace My\Other\Namespace;

    use My\Namespace\MyClass;

    $cls = new MyClass();

    // Or you can alias the namespace;

    namespace My\Other\Namespace;

    use My\Namespace as SomeOtherNamespace;

    $cls = new SomeOtherNamespace\MyClass();


    /**********************
    * Late Static Binding
    *
    */

    class ParentClass {
        public static function who() {
            echo "I'm a " . __CLASS__ . "\n";
        }
        public static function test() {
            // self references the class the method is defined within
            self::who();
            // static references the class the method was invoked on
            static::who();
        }
    }

    ParentClass::test();
    /*
    I'm a ParentClass
    I'm a ParentClass
    */

    class ChildClass extends ParentClass {
        public static function who() {
            echo "But I'm " . __CLASS__ . "\n";
        }
    }

    ChildClass::test();
    /*
    I'm a ParentClass
    But I'm ChildClass
    */

    /**********************
    *  Magic constants
    *
    */

    // Get current class name. Must be used inside a class declaration.
    echo "Current class name is " . __CLASS__;

    // Get full path directory of a file
    echo "Current directory is " . __DIR__;

        // Typical usage
        require __DIR__ . '/vendor/autoload.php';

    // Get full path of a file
    echo "Current file path is " . __FILE__;

    // Get current function name
    echo "Current function name is " . __FUNCTION__;

    // Get current line number
    echo "Current line number is " . __LINE__;

    // Get the name of the current method. Only returns a value when used inside a trait or object declaration.
    echo "Current method is " . __METHOD__;

    // Get the name of the current namespace
    echo "Current namespace is " . __NAMESPACE__;

    // Get the name of the current trait. Only returns a value when used inside a trait or object declaration.
    echo "Current namespace is " . __TRAIT__;

    /**********************
    *  Error Handling
    *
    */

    // Simple error handling can be done with try catch block

    try {
        // Do something
    } catch (Exception $e) {
        // Handle exception
    }

    // When using try catch blocks in a namespaced enviroment use the following

    try {
        // Do something
    } catch (\Exception $e) {
        // Handle exception
    }

    // Custom exceptions

    class MyException extends Exception {}

    try {

        $condition = true;

        if ($condition) {
            throw new MyException('Something just happend');
        }

    } catch (MyException $e) {
        // Handle my exception
    }
    ```

git -<

:   ```bash
    $ git init

    # Imprime e define algumas variáveis de configuração básicas (global)
    $ git config --global user.email
    $ git config --global user.name

    $ git config --global user.email "MyEmail@Zoho.com"
    $ git config --global user.name "My Name"

    # Ver rapidamente os comandos disponiveis
    $ git help

    # Ver todos os comandos disponiveis
    $ git help -a

    # Requerer *help* sobre um comando especifico - manual de utilizador
    # git help <command_here>
    $ git help add
    $ git help commit
    $ git help init

    # Apresenta o *branch*, ficheiros não monitorizados, alterações e outras
    # difereças
    $ git status

    # Para aprender mais detalhes sobre git *status*
    $ git help status

    # adiciona um ficheiro no directório do projecto atual
    $ git add HelloWorld.java

    # adiciona um ficheiro num sub-directório
    $ git add /path/to/file/HelloWorld.c

    # permite usar expressões regulares!
    $ git add ./*.java

    # listar *branches* existentes e remotos
    $ git branch -a

    # criar um novo *branch*
    $ git branch myNewBranch

    # apagar um *branch*
    $ git branch -d myBranch

    # alterar o nome de um *branch*
    # git branch -m <oldname> <newname>
    $ git branch -m myBranchName myNewBranchName

    # editar a descrição de um *branch*
    $ git branch myBranchName --edit-description

    # Checkout de um repositório - por predefinição para o branch master
    $ git checkout
    # Checkout de um branch especifico
    $ git checkout branchName
    # Cria um novo branch e faz checkout para ele.
    # Equivalente a: "git branch <name>; git checkout <name>"
    $ git checkout -b newBranch

    # Clona learnxinyminutes-docs
    $ git clone https://github.com/adambard/learnxinyminutes-docs.git

    # commit com uma mensagem
    $ git commit -m "Added multiplyNumbers() function to HelloWorld.c"

    # Apresenta a diferença entre o directório atual e o index
    $ git diff

    # Apresenta a diferença entre o index e os commits mais recentes
    $ git diff --cached

    # Apresenta a diferença entre o directório atual e o commit mais recente
    $ git diff HEAD

    # Obrigado a Travis Jeffery por estas
    # Define a apresentação de números de linha nos resultados do grep
    $ git config --global grep.lineNumber true

    # Torna os resultados da pesquisa mais fáceis de ler, agrupando-os
    $ git config --global alias.g "grep --break --heading --line-number"

    # Pesquisa por "variableName" em todos os ficheiros de java
    $ git grep 'variableName' -- '*.java'

    # Pesquisa por uma linha que contém "arrayListName" e "add" ou "remove"
    $ git grep -e 'arrayListName' --and \( -e add -e remove \)

    # Apresenta todos os commits
    $ git log

    # Apresenta X commits
    $ git log -n 10

    # Apresenta apenas commits de merge
    $ git log --merges

    # Junta o branch especificado com o atual
    $ git merge branchName

    # Para gerar sempre um commit ao juntar os branches
    $ git merge --no-ff branchName

    # Alterar o nome de um ficheiro
    $ git mv HelloWorld.c HelloNewWorld.c

    # Mover um ficheiro
    $ git mv HelloWorld.c ./new/path/HelloWorld.c

    # Forçar a alteração de nome ou mudança local
    # "existingFile" já existe no directório, será sobre-escrito.
    $ git mv -f myFile existingFile

    # Atualiza o repositório local, juntando as novas alterações
    # do repositório remoto 'origin' e branch 'master'
    # git pull <remote> <branch>
    # git pull => aplica a predefinição => git pull origin master
    $ git pull origin master

    # Juntar alterações do branch remote e fazer rebase commits do branch
    # no repositório local, como: "git pull <remote> <branch>, git rebase <branch>"
    $ git pull origin master --rebase

    # Envia e junta as alterações de um repositório local
    # para um remoto denominado "origin" no branch "master".
    # git push <remote> <branch>
    # git push => aplica a predefinição => git push origin master
    $ git push origin master

    # Faz Rebase de experimentBranch para master
    # git rebase <basebranch> <topicbranch>
    $ git rebase master experimentBranch

    # Restabelece a camada intermediária de registo para o último
    # commit (o directório fica sem alterações)
    $ git reset

    # Restabelece a camada intermediária de registo para o último commit, e
    # sobre-escreve o projecto atual
    $ git reset --hard

    # Move a head do branch atual para o commit especificado, sem alterar o projecto.
    # todas as alterações ainda existem no projecto
    $ git reset 31f2bb1

    # Inverte a head do branch atual para o commit especificado
    # fazendo com que este esteja em sintonia com o directório do projecto
    # Remove alterações não registadas e todos os commits após o commit especificado
    $ git reset --hard 31f2bb1

    # remove HelloWorld.c
    $ git rm HelloWorld.c

    # Remove um ficheiro de um sub-directório
    $ git rm /pather/to/the/file/HelloWorld.c
    ```

refs and see also

-   [Learn java in Y Minutes](https://learnxinyminutes.com/docs/java/)
-   [Learn perl in Y Minutes](https://learnxinyminutes.com/docs/perl/)
-   [Learn R in Y Minutes](https://learnxinyminutes.com/docs/r/)
-   [Learn X in Y Minutes: Scenic Programming Language Tours](https://learnxinyminutes.com/docs/bash/)
