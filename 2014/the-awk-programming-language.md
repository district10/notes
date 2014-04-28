THE AWK PROGRAMMING LANGUAGE
============================


An Awk Tutorial
---------------



### Get Started

- Hello World Example: `awk '$3 > 0 {print $1, $2 * $3}' data.txt`

- The Structure Of AWK Program
    - awk ' program ' infiles
    - awk ' program ' # get input from command line
    - awk -f progfile <optional list of input files> 
    - Format: pattern { action }


### Simple Output

- What AWK Can? 
    - Printing Fields, Selecting Input, And Transforming Data

- Printing Every Line 
    - { print }
    - { print $0 }

- Printing Certain Fields
    - { print $1 }

- Computing and Printing
    - { print $2, $3 * $4 }

- NF, the Number of Fields
    - { print NF, $1, $NF } # print number of fields and first and last fields of each input line

- NR, the Number of Lines Read so far
    - { print NR, $1 }

- Putting Text in the output 
    - { print "Total cost of the lunch is ", $1, $2 * $3 }


### Fancier Output 

- printf ("format",  value1, value2, ...)
    - %s, %f, %.2f for formats
    - \n for newline
    - %-s, left justfied

- Sorting
    - awk '{ printf("%6.2f %s\n", $2 * $3, $0) }' emp.data | sort

### Selection

- Selection By Comparison: $2 > 8

- Selection By Computation: $2 * $3  > 40

- Selection By Text Content: $2 == "Susan"

- Combination of Patterns
    - $2 >= 20 || $3 <= 50
    - !($2 < 20 && $3 > 50) 

- Data Validation

```
        NF I= 3    { print $0, "number of fields is not equal to 3" }
        $2 < 3.35  { print $0, "rate is below minimum wage" }
        $2 > 10	   { print $0, "rate exceeds $10 per hour" }
        $3 < 0	   { print $0, "negative hours worked" }
        $3 > 60	   { print $0, "too many hours worked" }
```

- BEGIN and END
    - BEGIN { something you want to do at begin } { process }
    - print "" # print empty line
    - print    # print input line


### Computing with AWK

- Counting 
{ counter = counter + 1 }
END { print ("there are %d lines.\n", counter) }

- Computing Sums and Average

- Handing Text

- String Concatenation

```
    { names = names $1 " " }
END { print names }
```

- Printing the Last Input Line

```
    { last = $0 }
END { print last }
```

- Built-in Functions

```
{ print $1, length($1) }
```

- Counting Lines, Words







### Control-flow statements







---

THE AWK LANGUAGE
----------------



---


DATA PROCESSING
---------------


---



REPORTS AND DATABASES 
---






---

PROCESSING WORDS
----------------



---

LITTLE LANGUAGES
----------------


---




EXPERIMENTS WITH ALGORITHMS
--------------------------- 








---

EPILOG
------








