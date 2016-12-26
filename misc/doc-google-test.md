---
title: Google Test
date: 2016-03-13
keywords:
    - google test
tags:
    - google test
...

Google Test
===========

```tzx-plain
// Copyright 2005, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
```

## Primer

### Introduction: Why Google C++ Testing Framework?

_Google C++ Testing Framework_ helps you write better C++ tests.

No matter whether you work on Linux, Windows, or a Mac, if you write C++ code,
Google Test can help you.

So what makes a good test, and how does Google C++ Testing Framework fit in? We
believe:

  - Tests should be **_independent_** and **_repeatable_**. It's a pain to
    debug a test that succeeds or fails as a result of other tests.  Google C++
    Testing Framework isolates the tests by running each of them on a different
    object.  When a test fails, Google C++ Testing Framework allows you to run
    it in isolation for quick debugging.
  - Tests should be well **_organized_** and reflect the structure of the
    tested code.  Google C++ Testing Framework groups related tests into test
    cases that can share data and subroutines. This common pattern is easy to
    recognize and makes tests easy to maintain. Such consistency is especially
    helpful when people switch projects and start to work on a new code base.
  - Tests should be **_portable_** and **_reusable_**. The open-source
    community has a lot of code that is platform-neutral, its tests should also
    be platform-neutral.  Google C++ Testing Framework works on different OSes,
    with different compilers (gcc, MSVC, and others), with or without
    exceptions, so Google C++ Testing Framework tests can easily work with a
    variety of configurations.  (Note that the current release only contains
    build scripts for Linux - we are actively working on scripts for other
    platforms.)
  - When tests fail, they should provide as much **_information_** about the
    problem as possible. Google C++ Testing Framework doesn't stop at the first
    test failure. Instead, it only stops the current test and continues with
    the next. You can also set up tests that report non-fatal failures after
    which the current test continues. Thus, you can **detect and fix multiple
    bugs in a single run-edit-compile cycle**.
  - The testing framework should liberate test writers from housekeeping chores
    and let them **focus on the test _content_**.  Google C++ Testing Framework
    automatically keeps track of all tests defined, and doesn't require the
    user to enumerate them in order to run them.
  - Tests should be **_fast_**. With Google C++ Testing Framework, you can
    reuse shared resources across tests and pay for the set-up/tear-down only
    once, without making tests depend on each other.

Since Google C++ Testing Framework is based on the popular xUnit
architecture, you'll feel right at home if you've used JUnit or PyUnit before.
If not, it will take you about 10 minutes to learn the basics and get started.
So let's go!

_Note:_ We sometimes refer to Google C++ Testing Framework informally
as _Google Test_.

### Setting up a New Test Project

To write a test program using Google Test, you need to compile Google
Test into a library and link your test with it.  We provide build
files for some popular build systems: `msvc/` for Visual Studio,
`xcode/` for Mac Xcode, `make/` for GNU make, `codegear/` for Borland
C++ Builder, and the autotools script (deprecated) and
`CMakeLists.txt` for CMake (recommended) in the Google Test root
directory.  If your build system is not on this list, you can take a
look at `make/Makefile` to learn how Google Test should be compiled
(basically you want to **compile `src/gtest-all.cc` with `GTEST_ROOT`
and `GTEST_ROOT/include` in the header search path**, where `GTEST_ROOT`
is the Google Test root directory).

Once you are able to compile the Google Test library, you should
create a project or build target for your test program.  Make sure you
have `GTEST_ROOT/include` in the header search path so that the
compiler can find `"gtest/gtest.h"` when compiling your test.  Set up
your test project to link with the Google Test library (for example,
in Visual Studio, this is done by adding a dependency on
`gtest.vcproj`).

If you still have questions, take a look at how Google Test's own
tests are built and use them as examples.

### Basic Concepts

When using Google Test, you start by writing **_assertions_**, which are statements
that check whether a condition is true. An assertion's result can be _success_,
_nonfatal failure_, or _fatal failure_. If a fatal failure occurs, it aborts
the current function; otherwise the program continues normally.

_Tests_ use assertions to verify the tested code's behavior. If a test crashes
or has a failed assertion, then it _fails_; otherwise it _succeeds_.

A _test case_ contains one or many tests. You should group your tests into test
cases that reflect the structure of the tested code. When multiple tests in a
test case need to share common objects and subroutines, you can put them into a
**_test fixture_** class.

**A _test program_ can contain multiple test cases.**

We'll now explain how to write a test program, starting at the individual
assertion level and building up to tests and test cases.

### Assertions

Google Test assertions are macros that resemble function calls. You test a
class or function by making assertions about its behavior. When an assertion
fails, Google Test prints the assertion's source file and line number location,
along with a failure message. You may also supply a custom failure message
which will be appended to Google Test's message.

The assertions come in pairs that test the same thing but have different
effects on the current function. **`ASSERT_*`** versions generate fatal failures
when they fail, and **abort the current function**. **`EXPECT_*`** versions generate
nonfatal failures, which don't abort the current function. Usually `EXPECT_*`
are preferred, as they allow more than one failures to be reported in a test.
However, you should use `ASSERT_*` if it doesn't make sense to continue when
the assertion in question fails.

Since a failed `ASSERT_*` returns from the current function immediately,
possibly skipping clean-up code that comes after it, it may cause a space leak.
Depending on the nature of the leak, it may or may not be worth fixing - so
keep this in mind if you get **a heap checker error** in addition to assertion
errors.

To provide **a custom failure message**, simply stream it into the macro using the
`<<` operator, or a sequence of such operators. An example:

```cpp
ASSERT_EQ(x.size(), y.size()) << "Vectors x and y are of unequal length";

for (int i = 0; i < x.size(); ++i) {
  EXPECT_EQ(x[i], y[i]) << "Vectors x and y differ at index " << i;
}
```

**Anything that can be streamed to an `ostream` can be streamed to an assertion
macro--in particular, C strings and `string` objects.** If a wide string
(`wchar_t*`, `TCHAR*` in `UNICODE` mode on Windows, or `std::wstring`) is
streamed to an assertion, it will be translated to UTF-8 when printed.

#### Basic Assertions

These assertions do basic true/false condition testing.

| **Fatal assertion** | **Nonfatal assertion** | **Verifies** |
|:--------------------|:-----------------------|:-------------|
| `ASSERT_TRUE(`_condition_`)`;  | `EXPECT_TRUE(`_condition_`)`;   | _condition_ is true |
| `ASSERT_FALSE(`_condition_`)`; | `EXPECT_FALSE(`_condition_`)`;  | _condition_ is false |

Remember, when they fail, `ASSERT_*` yields a fatal failure and
returns from the current function, while `EXPECT_*` yields a nonfatal
failure, allowing the function to continue running. In either case, an
assertion failure means its containing test fails.

_Availability_: Linux, Windows, Mac.

#### Binary Comparison

This section describes assertions that compare two values.

| **Fatal assertion** | **Nonfatal assertion** | **Verifies** |
|:--------------------|:-----------------------|:-------------|
|`ASSERT_EQ(`_expected_`, `_actual_`);`|`EXPECT_EQ(`_expected_`, `_actual_`);`| _expected_ `==` _actual_ |
|`ASSERT_NE(`_val1_`, `_val2_`);`      |`EXPECT_NE(`_val1_`, `_val2_`);`      | _val1_ `!=` _val2_ |
|`ASSERT_LT(`_val1_`, `_val2_`);`      |`EXPECT_LT(`_val1_`, `_val2_`);`      | _val1_ `<` _val2_ |
|`ASSERT_LE(`_val1_`, `_val2_`);`      |`EXPECT_LE(`_val1_`, `_val2_`);`      | _val1_ `<=` _val2_ |
|`ASSERT_GT(`_val1_`, `_val2_`);`      |`EXPECT_GT(`_val1_`, `_val2_`);`      | _val1_ `>` _val2_ |
|`ASSERT_GE(`_val1_`, `_val2_`);`      |`EXPECT_GE(`_val1_`, `_val2_`);`      | _val1_ `>=` _val2_ |

In the event of a failure, Google Test prints both _val1_ and _val2_
. In `ASSERT_EQ*` and `EXPECT_EQ*` (and all other equality assertions
we'll introduce later), you should put the expression you want to test
in the position of _actual_, and put its expected value in _expected_,
as Google Test's failure messages are optimized for this convention.

Value arguments must be comparable by the assertion's comparison
operator or you'll get a compiler error.  We used to require the
arguments to support the `<<` operator for streaming to an `ostream`,
but it's no longer necessary since v1.6.0 (if `<<` is supported, it
will be called to print the arguments when the assertion fails;
otherwise Google Test will attempt to print them in the best way it
can. For more details and how to customize the printing of the
arguments, see this Google Mock [recipe](https://github.com/google/googletest/blob/ff07a5de0e81580547f1685e101194ed1a4fcd56/googletest/docs/Primer.md).).

These assertions can work with a user-defined type, but only if you define the
corresponding comparison operator (e.g. `==`, `<`, etc).  If the corresponding
operator is defined, prefer using the `ASSERT_*()` macros because they will
print out not only the result of the comparison, but the two operands as well.

Arguments are always evaluated exactly once. Therefore, it's OK for the
arguments to have side effects. However, as with any ordinary C/C++ function,
the arguments' evaluation order is undefined (i.e. the compiler is free to
choose any order) and your code should not depend on any particular argument
evaluation order.

**`ASSERT_EQ()` does pointer equality on pointers.** If used on two C strings, it
tests if they are in the same memory location, not if they have the same value.
Therefore, if you want to **compare C strings (e.g. `const char*`)** by value, use
**`ASSERT_STREQ()`** , which will be described later on. In particular, to assert
that a C string is `NULL`, use **`ASSERT_STREQ(NULL, c_string)`** . However, to
compare two `string` objects, you should use `ASSERT_EQ`.

Macros in this section work with both narrow and wide string objects (`string`
and `wstring`).

_Availability_: Linux, Windows, Mac.

#### String Comparison

The assertions in this group compare two **C strings**. If you want to compare
two `string` objects, use `EXPECT_EQ`, `EXPECT_NE`, and etc instead.

| **Fatal assertion** | **Nonfatal assertion** | **Verifies** |
|:--------------------|:-----------------------|:-------------|
| `ASSERT_STREQ(`_expected\_str_`, `_actual\_str_`);`    | `EXPECT_STREQ(`_expected\_str_`, `_actual\_str_`);`     | the two C strings have the same content |
| `ASSERT_STRNE(`_str1_`, `_str2_`);`    | `EXPECT_STRNE(`_str1_`, `_str2_`);`     | the two C strings have different content |
| `ASSERT_STRCASEEQ(`_expected\_str_`, `_actual\_str_`);`| `EXPECT_STRCASEEQ(`_expected\_str_`, `_actual\_str_`);` | the two C strings have the same content, ignoring case |
| `ASSERT_STRCASENE(`_str1_`, `_str2_`);`| `EXPECT_STRCASENE(`_str1_`, `_str2_`);` | the two C strings have different content, ignoring case |

Note that "CASE" in an assertion name means that case is ignored.

`*STREQ*` and `*STRNE*` also accept wide C strings (`wchar_t*`). If a
comparison of two wide strings fails, their values will be printed as UTF-8
narrow strings.

A `NULL` pointer and an empty string are considered _different_.

_Availability_: Linux, Windows, Mac.

See also: For more string comparison tricks (substring, prefix, suffix, and
regular expression matching, for example), see the [Advanced Google Test Guide](#advanced-guide).

### Simple Tests

To create a test:

  #. Use the `TEST()` macro to define and name a test function, These are
     ordinary C++ functions that don't return a value.
  #. In this function, along with any valid C++ statements you want to include,
     use the various Google Test assertions to check values.
  #. The test's result is determined by the assertions; if any assertion in the
     test fails (either fatally or non-fatally), or if the test crashes, the
     entire test fails. Otherwise, it succeeds.

```cpp
TEST(test_case_name, test_name) {
 ... test body ...
}
```

`TEST()` arguments go from general to specific. The _first_ argument is the
name of the test case, and the _second_ argument is the test's name within the
test case. Both names must be valid C++ identifiers, and they **should not
contain underscore (`_`)**. A test's _full name_ consists of its containing test
case and its individual name. Tests from different test cases can have the same
individual name.

For example, let's take a simple integer function:

```cpp
int Factorial(int n); // Returns the factorial of n
```

A test case for this function might look like:

```cpp
// Tests factorial of 0.
TEST(FactorialTest, HandlesZeroInput) {
  EXPECT_EQ(1, Factorial(0));
}

// Tests factorial of positive numbers.
TEST(FactorialTest, HandlesPositiveInput) {
  EXPECT_EQ(1, Factorial(1));
  EXPECT_EQ(2, Factorial(2));
  EXPECT_EQ(6, Factorial(3));
  EXPECT_EQ(40320, Factorial(8));
}
```

Google Test groups the test results by test cases, so logically-related tests
should be in the same test case; in other words, the first argument to their
`TEST()` should be the same. In the above example, we have two tests,
`HandlesZeroInput` and `HandlesPositiveInput`, that belong to the same test
case `FactorialTest`.

_Availability_: Linux, Windows, Mac.

### Test Fixtures: Using the Same Data Configuration for Multiple Tests

If you find yourself writing two or more tests that operate on similar data,
you can use a _test fixture_. It allows you to reuse the same configuration of
objects for several different tests.

To create a fixture, just:
  1. Derive a class from `::testing::Test` . Start its body with `protected:` or `public:` as we'll want to access fixture members from sub-classes.
  1. Inside the class, declare any objects you plan to use.
  1. If necessary, write a default constructor or `SetUp()` function to prepare the objects for each test. A common mistake is to spell `SetUp()` as `Setup()` with a small `u` - don't let that happen to you.
  1. If necessary, write a destructor or `TearDown()` function to release any resources you allocated in `SetUp()` . To learn when you should use the constructor/destructor and when you should use `SetUp()/TearDown()`, read this [FAQ entry](V1_6_FAQ.md#should-i-use-the-constructordestructor-of-the-test-fixture-or-the-set-uptear-down-function).
  1. If needed, define subroutines for your tests to share.

When using a fixture, use `TEST_F()` instead of `TEST()` as it allows you to
access objects and subroutines in the test fixture:
```
TEST_F(test_case_name, test_name) {
 ... test body ...
}
```

Like `TEST()`, the first argument is the test case name, but for `TEST_F()`
this must be the name of the test fixture class. You've probably guessed: `_F`
is for fixture.

Unfortunately, the C++ macro system does not allow us to create a single macro
that can handle both types of tests. Using the wrong macro causes a compiler
error.

Also, you must first define a test fixture class before using it in a
`TEST_F()`, or you'll get the compiler error "`virtual outside class
declaration`".

For each test defined with `TEST_F()`, Google Test will:
  1. Create a _fresh_ test fixture at runtime
  1. Immediately initialize it via `SetUp()` ,
  1. Run the test
  1. Clean up by calling `TearDown()`
  1. Delete the test fixture.  Note that different tests in the same test case have different test fixture objects, and Google Test always deletes a test fixture before it creates the next one. Google Test does not reuse the same test fixture for multiple tests. Any changes one test makes to the fixture do not affect other tests.

As an example, let's write tests for a FIFO queue class named `Queue`, which
has the following interface:
```
template <typename E> // E is the element type.
class Queue {
 public:
  Queue();
  void Enqueue(const E& element);
  E* Dequeue(); // Returns NULL if the queue is empty.
  size_t size() const;
  ...
};
```

First, define a fixture class. By convention, you should give it the name
`FooTest` where `Foo` is the class being tested.

```
class QueueTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
    q1_.Enqueue(1);
    q2_.Enqueue(2);
    q2_.Enqueue(3);
  }

  // virtual void TearDown() {}

  Queue<int> q0_;
  Queue<int> q1_;
  Queue<int> q2_;
};
```

In this case, `TearDown()` is not needed since we don't have to clean up after
each test, other than what's already done by the destructor.

Now we'll write tests using `TEST_F()` and this fixture.

```
TEST_F(QueueTest, IsEmptyInitially) {
  EXPECT_EQ(0, q0_.size());
}

TEST_F(QueueTest, DequeueWorks) {
  int* n = q0_.Dequeue();
  EXPECT_EQ(NULL, n);

  n = q1_.Dequeue();
  ASSERT_TRUE(n != NULL);
  EXPECT_EQ(1, *n);
  EXPECT_EQ(0, q1_.size());
  delete n;

  n = q2_.Dequeue();
  ASSERT_TRUE(n != NULL);
  EXPECT_EQ(2, *n);
  EXPECT_EQ(1, q2_.size());
  delete n;
}
```

The above uses both `ASSERT_*` and `EXPECT_*` assertions. The rule of thumb is
to use `EXPECT_*` when you want the test to continue to reveal more errors
after the assertion failure, and use `ASSERT_*` when continuing after failure
doesn't make sense. For example, the second assertion in the `Dequeue` test is
`ASSERT_TRUE(n != NULL)`, as we need to dereference the pointer `n` later,
which would lead to a segfault when `n` is `NULL`.

When these tests run, the following happens:
  1. Google Test constructs a `QueueTest` object (let's call it `t1` ).
  1. `t1.SetUp()` initializes `t1` .
  1. The first test ( `IsEmptyInitially` ) runs on `t1` .
  1. `t1.TearDown()` cleans up after the test finishes.
  1. `t1` is destructed.
  1. The above steps are repeated on another `QueueTest` object, this time running the `DequeueWorks` test.

_Availability_: Linux, Windows, Mac.

_Note_: Google Test automatically saves all _Google Test_ flags when a test
object is constructed, and restores them when it is destructed.

### Invoking the Tests

`TEST()` and `TEST_F()` implicitly register their tests with Google Test. So, unlike with many other C++ testing frameworks, you don't have to re-list all your defined tests in order to run them.

After defining your tests, you can run them with `RUN_ALL_TESTS()` , which returns `0` if all the tests are successful, or `1` otherwise. Note that `RUN_ALL_TESTS()` runs _all tests_ in your link unit -- they can be from different test cases, or even different source files.

When invoked, the `RUN_ALL_TESTS()` macro:
  1. Saves the state of all  Google Test flags.
  1. Creates a test fixture object for the first test.
  1. Initializes it via `SetUp()`.
  1. Runs the test on the fixture object.
  1. Cleans up the fixture via `TearDown()`.
  1. Deletes the fixture.
  1. Restores the state of all Google Test flags.
  1. Repeats the above steps for the next test, until all tests have run.

In addition, if the text fixture's constructor generates a fatal failure in
step 2, there is no point for step 3 - 5 and they are thus skipped. Similarly,
if step 3 generates a fatal failure, step 4 will be skipped.

_Important_: You must not ignore the return value of `RUN_ALL_TESTS()`, or `gcc`
will give you a compiler error. The rationale for this design is that the
automated testing service determines whether a test has passed based on its
exit code, not on its stdout/stderr output; thus your `main()` function must
return the value of `RUN_ALL_TESTS()`.

Also, you should call `RUN_ALL_TESTS()` only **once**. Calling it more than once
conflicts with some advanced Google Test features (e.g. thread-safe death
tests) and thus is not supported.

_Availability_: Linux, Windows, Mac.

### Writing the main() Function

You can start from this boilerplate:

```cpp
#include "this/package/foo.h"
#include "gtest/gtest.h"

namespace {

// The fixture for testing class Foo.
class FooTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if its body
  // is empty.

  FooTest() {
    // You can do set-up work for each test here.
  }

  virtual ~FooTest() {
    // You can do clean-up work that doesn't throw exceptions here.
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  virtual void SetUp() {
    // Code here will be called immediately after the constructor (right
    // before each test).
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test (right
    // before the destructor).
  }

  // Objects declared here can be used by all tests in the test case for Foo.
};

// Tests that the Foo::Bar() method does Abc.
TEST_F(FooTest, MethodBarDoesAbc) {
  const string input_filepath = "this/package/testdata/myinputfile.dat";
  const string output_filepath = "this/package/testdata/myoutputfile.dat";
  Foo f;
  EXPECT_EQ(0, f.Bar(input_filepath, output_filepath));
}

// Tests that Foo does Xyz.
TEST_F(FooTest, DoesXyz) {
  // Exercises the Xyz feature of Foo.
}

}  // namespace

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
```

The `::testing::InitGoogleTest()` function parses the command line for Google
Test flags, and removes all recognized flags. This allows the user to control a
test program's behavior via various flags, which we'll cover in [AdvancedGuide](V1_6_AdvancedGuide.md).
You must call this function before calling `RUN_ALL_TESTS()`, or the flags
won't be properly initialized.

On Windows, `InitGoogleTest()` also works with wide strings, so it can be used
in programs compiled in `UNICODE` mode as well.

But maybe you think that writing all those main() functions is too much work? We agree with you completely and that's why Google Test provides a basic implementation of main(). If it fits your needs, then just link your test with gtest\_main library and you are good to go.

#### Important note for Visual C++ users
If you put your tests into a library and your `main()` function is in a different library or in your .exe file, those tests will not run. The reason is a [bug](https://connect.microsoft.com/feedback/viewfeedback.aspx?FeedbackID=244410&siteid=210) in Visual C++. When you define your tests, Google Test creates certain static objects to register them. These objects are not referenced from elsewhere but their constructors are still supposed to run. When Visual C++ linker sees that nothing in the library is referenced from other places it throws the library out. You have to reference your library with tests from your main program to keep the linker from discarding it. Here is how to do it. Somewhere in your library code declare a function:
```
__declspec(dllexport) int PullInMyLibrary() { return 0; }
```
If you put your tests in a static library (not DLL) then `__declspec(dllexport)` is not required. Now, in your main program, write a code that invokes that function:
```
int PullInMyLibrary();
static int dummy = PullInMyLibrary();
```
This will keep your tests referenced and will make them register themselves at startup.

In addition, if you define your tests in a static library, add `/OPT:NOREF` to your main program linker options. If you use MSVC++ IDE, go to your .exe project properties/Configuration Properties/Linker/Optimization and set References setting to `Keep Unreferenced Data (/OPT:NOREF)`. This will keep Visual C++ linker from discarding individual symbols generated by your tests from the final executable.

There is one more pitfall, though. If you use Google Test as a static library (that's how it is defined in gtest.vcproj) your tests must also reside in a static library. If you have to have them in a DLL, you _must_ change Google Test to build into a DLL as well. Otherwise your tests will not run correctly or will not run at all. The general conclusion here is: make your life easier - do not write your tests in libraries!

### Where to Go from Here

Congratulations! You've learned the Google Test basics. You can start writing
and running Google Test tests, read some [samples](V1_6_Samples.md), or continue with
[AdvancedGuide](V1_6_AdvancedGuide.md), which describes many more useful Google Test features.

### Known Limitations

Google Test is designed to be thread-safe.  The implementation is
thread-safe on systems where the `pthreads` library is available.  It
is currently _unsafe_ to use Google Test assertions from two threads
concurrently on other systems (e.g. Windows).  In most tests this is
not an issue as usually the assertions are done in the main thread. If
you want to help, you can volunteer to implement the necessary
synchronization primitives in `gtest-port.h` for your platform.

---

## Samples

[googletest/V1_6_Samples.md at ff07a5de0e81580547f1685e101194ed1a4fcd56 · google/googletest](https://github.com/google/googletest/blob/ff07a5de0e81580547f1685e101194ed1a4fcd56/googletest/docs/V1_6_Samples.md)

---

## Advanced Guide

Now that you have read [Primer](#primer) and learned how to write tests
using Google Test, it's time to learn some new tricks. This document
will show you more assertions as well as how to construct complex
failure messages, propagate fatal failures, reuse and speed up your
test fixtures, and use various flags with your tests.

#### More Assertions

This section covers some less frequently used, but still significant,
assertions.

##### Explicit Success and Failure

These three assertions do not actually test a value or expression. Instead,
they generate a success or failure directly. Like the macros that actually
perform a test, you may stream a custom failure message into the them.

| `SUCCEED();` |
|:-------------|

Generates a success. This does NOT make the overall test succeed. A test is
considered successful only if none of its assertions fail during its execution.

Note: `SUCCEED()` is purely documentary and currently doesn't generate any
user-visible output. However, we may add `SUCCEED()` messages to Google Test's
output in the future.

| `FAIL();`  | `ADD_FAILURE();` | `ADD_FAILURE_AT("`_file\_path_`", `_line\_number_`);` |
|:-----------|:-----------------|:------------------------------------------------------|

`FAIL()` generates a fatal failure, while `ADD_FAILURE()` and `ADD_FAILURE_AT()` generate a nonfatal
failure. These are useful when control flow, rather than a Boolean expression,
deteremines the test's success or failure. For example, you might want to write
something like:

```
switch(expression) {
  case 1: ... some checks ...
  case 2: ... some other checks
  ...
  default: FAIL() << "We shouldn't get here.";
}
```

_Availability_: Linux, Windows, Mac.

##### Exception Assertions

These are for verifying that a piece of code throws (or does not
throw) an exception of the given type:

| **Fatal assertion** | **Nonfatal assertion** | **Verifies** |
|:--------------------|:-----------------------|:-------------|
| `ASSERT_THROW(`_statement_, _exception\_type_`);`  | `EXPECT_THROW(`_statement_, _exception\_type_`);`  | _statement_ throws an exception of the given type  |
| `ASSERT_ANY_THROW(`_statement_`);`                | `EXPECT_ANY_THROW(`_statement_`);`                | _statement_ throws an exception of any type        |
| `ASSERT_NO_THROW(`_statement_`);`                 | `EXPECT_NO_THROW(`_statement_`);`                 | _statement_ doesn't throw any exception            |

Examples:

```
ASSERT_THROW(Foo(5), bar_exception);

EXPECT_NO_THROW({
  int n = 5;
  Bar(&n);
});
```

_Availability_: Linux, Windows, Mac; since version 1.1.0.

##### Predicate Assertions for Better Error Messages

Even though Google Test has a rich set of assertions, they can never be
complete, as it's impossible (nor a good idea) to anticipate all the scenarios
a user might run into. Therefore, sometimes a user has to use `EXPECT_TRUE()`
to check a complex expression, for lack of a better macro. This has the problem
of not showing you the values of the parts of the expression, making it hard to
understand what went wrong. As a workaround, some users choose to construct the
failure message by themselves, streaming it into `EXPECT_TRUE()`. However, this
is awkward especially when the expression has side-effects or is expensive to
evaluate.

Google Test gives you three different options to solve this problem:

###### Using an Existing Boolean Function

If you already have a function or a functor that returns `bool` (or a type
that can be implicitly converted to `bool`), you can use it in a _predicate
assertion_ to get the function arguments printed for free:

| **Fatal assertion** | **Nonfatal assertion** | **Verifies** |
|:--------------------|:-----------------------|:-------------|
| `ASSERT_PRED1(`_pred1, val1_`);`       | `EXPECT_PRED1(`_pred1, val1_`);` | _pred1(val1)_ returns true |
| `ASSERT_PRED2(`_pred2, val1, val2_`);` | `EXPECT_PRED2(`_pred2, val1, val2_`);` |  _pred2(val1, val2)_ returns true |
|  ...                | ...                    | ...          |

In the above, _predn_ is an _n_-ary predicate function or functor, where
_val1_, _val2_, ..., and _valn_ are its arguments. The assertion succeeds
if the predicate returns `true` when applied to the given arguments, and fails
otherwise. When the assertion fails, it prints the value of each argument. In
either case, the arguments are evaluated exactly once.

Here's an example. Given

```
// Returns true iff m and n have no common divisors except 1.
bool MutuallyPrime(int m, int n) { ... }
const int a = 3;
const int b = 4;
const int c = 10;
```

the assertion `EXPECT_PRED2(MutuallyPrime, a, b);` will succeed, while the
assertion `EXPECT_PRED2(MutuallyPrime, b, c);` will fail with the message

<pre>
!MutuallyPrime(b, c) is false, where<br>
b is 4<br>
c is 10<br>
</pre>

**Notes:**

  1. If you see a compiler error "no matching function to call" when using `ASSERT_PRED*` or `EXPECT_PRED*`, please see [this](v1_6_FAQ.md#ithe-compiler-complains-about-undefined-references-to-some-static-const-member-variables-but-i-did-define-them-in-the-class-body-whats-wrong) for how to resolve it.
  1. Currently we only provide predicate assertions of arity <= 5. If you need a higher-arity assertion, let us know.

_Availability_: Linux, Windows, Mac

###### Using a Function That Returns an AssertionResult

While `EXPECT_PRED*()` and friends are handy for a quick job, the
syntax is not satisfactory: you have to use different macros for
different arities, and it feels more like Lisp than C++.  The
`::testing::AssertionResult` class solves this problem.

An `AssertionResult` object represents the result of an assertion
(whether it's a success or a failure, and an associated message).  You
can create an `AssertionResult` using one of these factory
functions:

```
namespace testing {

// Returns an AssertionResult object to indicate that an assertion has
// succeeded.
AssertionResult AssertionSuccess();

// Returns an AssertionResult object to indicate that an assertion has
// failed.
AssertionResult AssertionFailure();

}
```

You can then use the `<<` operator to stream messages to the
`AssertionResult` object.

To provide more readable messages in Boolean assertions
(e.g. `EXPECT_TRUE()`), write a predicate function that returns
`AssertionResult` instead of `bool`. For example, if you define
`IsEven()` as:

```
::testing::AssertionResult IsEven(int n) {
  if ((n % 2) == 0)
    return ::testing::AssertionSuccess();
  else
    return ::testing::AssertionFailure() << n << " is odd";
}
```

instead of:

```
bool IsEven(int n) {
  return (n % 2) == 0;
}
```

the failed assertion `EXPECT_TRUE(IsEven(Fib(4)))` will print:

<pre>
Value of: !IsEven(Fib(4))<br>
Actual: false (*3 is odd*)<br>
Expected: true<br>
</pre>

instead of a more opaque

<pre>
Value of: !IsEven(Fib(4))<br>
Actual: false<br>
Expected: true<br>
</pre>

If you want informative messages in `EXPECT_FALSE` and `ASSERT_FALSE`
as well, and are fine with making the predicate slower in the success
case, you can supply a success message:

```
::testing::AssertionResult IsEven(int n) {
  if ((n % 2) == 0)
    return ::testing::AssertionSuccess() << n << " is even";
  else
    return ::testing::AssertionFailure() << n << " is odd";
}
```

Then the statement `EXPECT_FALSE(IsEven(Fib(6)))` will print

<pre>
Value of: !IsEven(Fib(6))<br>
Actual: true (8 is even)<br>
Expected: false<br>
</pre>

_Availability_: Linux, Windows, Mac; since version 1.4.1.

###### Using a Predicate-Formatter

If you find the default message generated by `(ASSERT|EXPECT)_PRED*` and
`(ASSERT|EXPECT)_(TRUE|FALSE)` unsatisfactory, or some arguments to your
predicate do not support streaming to `ostream`, you can instead use the
following _predicate-formatter assertions_ to _fully_ customize how the
message is formatted:

| **Fatal assertion** | **Nonfatal assertion** | **Verifies** |
|:--------------------|:-----------------------|:-------------|
| `ASSERT_PRED_FORMAT1(`_pred\_format1, val1_`);`        | `EXPECT_PRED_FORMAT1(`_pred\_format1, val1_`); | _pred\_format1(val1)_ is successful |
| `ASSERT_PRED_FORMAT2(`_pred\_format2, val1, val2_`);` | `EXPECT_PRED_FORMAT2(`_pred\_format2, val1, val2_`);` | _pred\_format2(val1, val2)_ is successful |
| `...`               | `...`                  | `...`        |

The difference between this and the previous two groups of macros is that instead of
a predicate, `(ASSERT|EXPECT)_PRED_FORMAT*` take a _predicate-formatter_
(_pred\_formatn_), which is a function or functor with the signature:

`::testing::AssertionResult PredicateFormattern(const char* `_expr1_`, const char* `_expr2_`, ... const char* `_exprn_`, T1 `_val1_`, T2 `_val2_`, ... Tn `_valn_`);`

where _val1_, _val2_, ..., and _valn_ are the values of the predicate
arguments, and _expr1_, _expr2_, ..., and _exprn_ are the corresponding
expressions as they appear in the source code. The types `T1`, `T2`, ..., and
`Tn` can be either value types or reference types. For example, if an
argument has type `Foo`, you can declare it as either `Foo` or `const Foo&`,
whichever is appropriate.

A predicate-formatter returns a `::testing::AssertionResult` object to indicate
whether the assertion has succeeded or not. The only way to create such an
object is to call one of these factory functions:

As an example, let's improve the failure message in the previous example, which uses `EXPECT_PRED2()`:

```
// Returns the smallest prime common divisor of m and n,
// or 1 when m and n are mutually prime.
int SmallestPrimeCommonDivisor(int m, int n) { ... }

// A predicate-formatter for asserting that two integers are mutually prime.
::testing::AssertionResult AssertMutuallyPrime(const char* m_expr,
                                               const char* n_expr,
                                               int m,
                                               int n) {
  if (MutuallyPrime(m, n))
    return ::testing::AssertionSuccess();

  return ::testing::AssertionFailure()
      << m_expr << " and " << n_expr << " (" << m << " and " << n
      << ") are not mutually prime, " << "as they have a common divisor "
      << SmallestPrimeCommonDivisor(m, n);
}
```

With this predicate-formatter, we can use

```
EXPECT_PRED_FORMAT2(AssertMutuallyPrime, b, c);
```

to generate the message

<pre>
b and c (4 and 10) are not mutually prime, as they have a common divisor 2.<br>
</pre>

As you may have realized, many of the assertions we introduced earlier are
special cases of `(EXPECT|ASSERT)_PRED_FORMAT*`. In fact, most of them are
indeed defined using `(EXPECT|ASSERT)_PRED_FORMAT*`.

_Availability_: Linux, Windows, Mac.


##### Floating-Point Comparison

Comparing floating-point numbers is tricky. Due to round-off errors, it is
very unlikely that two floating-points will match exactly. Therefore,
`ASSERT_EQ` 's naive comparison usually doesn't work. And since floating-points
can have a wide value range, no single fixed error bound works. It's better to
compare by a fixed relative error bound, except for values close to 0 due to
the loss of precision there.

In general, for floating-point comparison to make sense, the user needs to
carefully choose the error bound. If they don't want or care to, comparing in
terms of Units in the Last Place (ULPs) is a good default, and Google Test
provides assertions to do this. Full details about ULPs are quite long; if you
want to learn more, see
[this article on float comparison](http://www.cygnus-software.com/papers/comparingfloats/comparingfloats.htm).

###### Floating-Point Macros

| **Fatal assertion** | **Nonfatal assertion** | **Verifies** |
|:--------------------|:-----------------------|:-------------|
| `ASSERT_FLOAT_EQ(`_expected, actual_`);`  | `EXPECT_FLOAT_EQ(`_expected, actual_`);` | the two `float` values are almost equal |
| `ASSERT_DOUBLE_EQ(`_expected, actual_`);` | `EXPECT_DOUBLE_EQ(`_expected, actual_`);` | the two `double` values are almost equal |

By "almost equal", we mean the two values are within 4 ULP's from each
other.

The following assertions allow you to choose the acceptable error bound:

| **Fatal assertion** | **Nonfatal assertion** | **Verifies** |
|:--------------------|:-----------------------|:-------------|
| `ASSERT_NEAR(`_val1, val2, abs\_error_`);` | `EXPECT_NEAR`_(val1, val2, abs\_error_`);` | the difference between _val1_ and _val2_ doesn't exceed the given absolute error |

_Availability_: Linux, Windows, Mac.

##### Floating-Point Predicate-Format Functions

Some floating-point operations are useful, but not that often used. In order
to avoid an explosion of new macros, we provide them as predicate-format
functions that can be used in predicate assertion macros (e.g.
`EXPECT_PRED_FORMAT2`, etc).

```
EXPECT_PRED_FORMAT2(::testing::FloatLE, val1, val2);
EXPECT_PRED_FORMAT2(::testing::DoubleLE, val1, val2);
```

Verifies that _val1_ is less than, or almost equal to, _val2_. You can
replace `EXPECT_PRED_FORMAT2` in the above table with `ASSERT_PRED_FORMAT2`.

_Availability_: Linux, Windows, Mac.

#### Windows HRESULT assertions

These assertions test for `HRESULT` success or failure.

| **Fatal assertion** | **Nonfatal assertion** | **Verifies** |
|:--------------------|:-----------------------|:-------------|
| `ASSERT_HRESULT_SUCCEEDED(`_expression_`);` | `EXPECT_HRESULT_SUCCEEDED(`_expression_`);` | _expression_ is a success `HRESULT` |
| `ASSERT_HRESULT_FAILED(`_expression_`);`    | `EXPECT_HRESULT_FAILED(`_expression_`);`    | _expression_ is a failure `HRESULT` |

The generated output contains the human-readable error message
associated with the `HRESULT` code returned by _expression_.

You might use them like this:

```
CComPtr shell;
ASSERT_HRESULT_SUCCEEDED(shell.CoCreateInstance(L"Shell.Application"));
CComVariant empty;
ASSERT_HRESULT_SUCCEEDED(shell->ShellExecute(CComBSTR(url), empty, empty, empty, empty));
```

_Availability_: Windows.

#### Type Assertions

You can call the function
```
::testing::StaticAssertTypeEq<T1, T2>();
```
to assert that types `T1` and `T2` are the same.  The function does
nothing if the assertion is satisfied.  If the types are different,
the function call will fail to compile, and the compiler error message
will likely (depending on the compiler) show you the actual values of
`T1` and `T2`.  This is mainly useful inside template code.

_Caveat:_ When used inside a member function of a class template or a
function template, `StaticAssertTypeEq<T1, T2>()` is effective _only if_
the function is instantiated.  For example, given:
```
template <typename T> class Foo {
 public:
  void Bar() { ::testing::StaticAssertTypeEq<int, T>(); }
};
```
the code:
```
void Test1() { Foo<bool> foo; }
```
will _not_ generate a compiler error, as `Foo<bool>::Bar()` is never
actually instantiated.  Instead, you need:
```
void Test2() { Foo<bool> foo; foo.Bar(); }
```
to cause a compiler error.

_Availability:_ Linux, Windows, Mac; since version 1.3.0.

#### Assertion Placement

You can use assertions in any C++ function. In particular, it doesn't
have to be a method of the test fixture class. The one constraint is
that assertions that generate a fatal failure (`FAIL*` and `ASSERT_*`)
can only be used in void-returning functions. This is a consequence of
Google Test not using exceptions. By placing it in a non-void function
you'll get a confusing compile error like
`"error: void value not ignored as it ought to be"`.

If you need to use assertions in a function that returns non-void, one option
is to make the function return the value in an out parameter instead. For
example, you can rewrite `T2 Foo(T1 x)` to `void Foo(T1 x, T2* result)`. You
need to make sure that `*result` contains some sensible value even when the
function returns prematurely. As the function now returns `void`, you can use
any assertion inside of it.

If changing the function's type is not an option, you should just use
assertions that generate non-fatal failures, such as `ADD_FAILURE*` and
`EXPECT_*`.

_Note_: Constructors and destructors are not considered void-returning
functions, according to the C++ language specification, and so you may not use
fatal assertions in them. You'll get a compilation error if you try. A simple
workaround is to transfer the entire body of the constructor or destructor to a
private void-returning method. However, you should be aware that a fatal
assertion failure in a constructor does not terminate the current test, as your
intuition might suggest; it merely returns from the constructor early, possibly
leaving your object in a partially-constructed state. Likewise, a fatal
assertion failure in a destructor may leave your object in a
partially-destructed state. Use assertions carefully in these situations!

### Teaching Google Test How to Print Your Values

When a test assertion such as `EXPECT_EQ` fails, Google Test prints the
argument values to help you debug.  It does this using a
user-extensible value printer.

This printer knows how to print built-in C++ types, native arrays, STL
containers, and any type that supports the `<<` operator.  For other
types, it prints the raw bytes in the value and hopes that you the
user can figure it out.

As mentioned earlier, the printer is _extensible_.  That means
you can teach it to do a better job at printing your particular type
than to dump the bytes.  To do that, define `<<` for your type:

```
#include <iostream>

namespace foo {

class Bar { ... };  // We want Google Test to be able to print instances of this.

// It's important that the << operator is defined in the SAME
// namespace that defines Bar.  C++'s look-up rules rely on that.
::std::ostream& operator<<(::std::ostream& os, const Bar& bar) {
  return os << bar.DebugString();  // whatever needed to print bar to os
}

}  // namespace foo
```

Sometimes, this might not be an option: your team may consider it bad
style to have a `<<` operator for `Bar`, or `Bar` may already have a
`<<` operator that doesn't do what you want (and you cannot change
it).  If so, you can instead define a `PrintTo()` function like this:

```
#include <iostream>

namespace foo {

class Bar { ... };

// It's important that PrintTo() is defined in the SAME
// namespace that defines Bar.  C++'s look-up rules rely on that.
void PrintTo(const Bar& bar, ::std::ostream* os) {
  *os << bar.DebugString();  // whatever needed to print bar to os
}

}  // namespace foo
```

If you have defined both `<<` and `PrintTo()`, the latter will be used
when Google Test is concerned.  This allows you to customize how the value
appears in Google Test's output without affecting code that relies on the
behavior of its `<<` operator.

If you want to print a value `x` using Google Test's value printer
yourself, just call `::testing::PrintToString(`_x_`)`, which
returns an `std::string`:

```
vector<pair<Bar, int> > bar_ints = GetBarIntVector();

EXPECT_TRUE(IsCorrectBarIntVector(bar_ints))
    << "bar_ints = " << ::testing::PrintToString(bar_ints);
```

### Death Tests

In many applications, there are assertions that can cause application failure
if a condition is not met. These sanity checks, which ensure that the program
is in a known good state, are there to fail at the earliest possible time after
some program state is corrupted. If the assertion checks the wrong condition,
then the program may proceed in an erroneous state, which could lead to memory
corruption, security holes, or worse. Hence it is vitally important to test
that such assertion statements work as expected.

Since these precondition checks cause the processes to die, we call such tests
_death tests_. More generally, any test that checks that a program terminates
(except by throwing an exception) in an expected fashion is also a death test.

Note that if a piece of code throws an exception, we don't consider it "death"
for the purpose of death tests, as the caller of the code could catch the exception
and avoid the crash. If you want to verify exceptions thrown by your code,
see [Exception Assertions](#exception-assertions).

If you want to test `EXPECT_*()/ASSERT_*()` failures in your test code, see [Catching Failures](#catching-failures).

#### How to Write a Death Test

Google Test has the following macros to support death tests:

| **Fatal assertion** | **Nonfatal assertion** | **Verifies** |
|:--------------------|:-----------------------|:-------------|
| `ASSERT_DEATH(`_statement, regex_`); | `EXPECT_DEATH(`_statement, regex_`); | _statement_ crashes with the given error |
| `ASSERT_DEATH_IF_SUPPORTED(`_statement, regex_`); | `EXPECT_DEATH_IF_SUPPORTED(`_statement, regex_`); | if death tests are supported, verifies that _statement_ crashes with the given error; otherwise verifies nothing |
| `ASSERT_EXIT(`_statement, predicate, regex_`); | `EXPECT_EXIT(`_statement, predicate, regex_`); |_statement_ exits with the given error and its exit code matches _predicate_ |

where _statement_ is a statement that is expected to cause the process to
die, _predicate_ is a function or function object that evaluates an integer
exit status, and _regex_ is a regular expression that the stderr output of
_statement_ is expected to match. Note that _statement_ can be _any valid
statement_ (including _compound statement_) and doesn't have to be an
expression.

As usual, the `ASSERT` variants abort the current test function, while the
`EXPECT` variants do not.

**Note:** We use the word "crash" here to mean that the process
terminates with a _non-zero_ exit status code.  There are two
possibilities: either the process has called `exit()` or `_exit()`
with a non-zero value, or it may be killed by a signal.

This means that if _statement_ terminates the process with a 0 exit
code, it is _not_ considered a crash by `EXPECT_DEATH`.  Use
`EXPECT_EXIT` instead if this is the case, or if you want to restrict
the exit code more precisely.

A predicate here must accept an `int` and return a `bool`. The death test
succeeds only if the predicate returns `true`. Google Test defines a few
predicates that handle the most common cases:

```
::testing::ExitedWithCode(exit_code)
```

This expression is `true` if the program exited normally with the given exit
code.

```
::testing::KilledBySignal(signal_number)  // Not available on Windows.
```

This expression is `true` if the program was killed by the given signal.

The `*_DEATH` macros are convenient wrappers for `*_EXIT` that use a predicate
that verifies the process' exit code is non-zero.

Note that a death test only cares about three things:

  1. does _statement_ abort or exit the process?
  1. (in the case of `ASSERT_EXIT` and `EXPECT_EXIT`) does the exit status satisfy _predicate_?  Or (in the case of `ASSERT_DEATH` and `EXPECT_DEATH`) is the exit status non-zero?  And
  1. does the stderr output match _regex_?

In particular, if _statement_ generates an `ASSERT_*` or `EXPECT_*` failure, it will **not** cause the death test to fail, as Google Test assertions don't abort the process.

To write a death test, simply use one of the above macros inside your test
function. For example,

```
TEST(My*DeathTest*, Foo) {
  // This death test uses a compound statement.
  ASSERT_DEATH({ int n = 5; Foo(&n); }, "Error on line .* of Foo()");
}
TEST(MyDeathTest, NormalExit) {
  EXPECT_EXIT(NormalExit(), ::testing::ExitedWithCode(0), "Success");
}
TEST(MyDeathTest, KillMyself) {
  EXPECT_EXIT(KillMyself(), ::testing::KilledBySignal(SIGKILL), "Sending myself unblockable signal");
}
```

verifies that:

  * calling `Foo(5)` causes the process to die with the given error message,
  * calling `NormalExit()` causes the process to print `"Success"` to stderr and exit with exit code 0, and
  * calling `KillMyself()` kills the process with signal `SIGKILL`.

The test function body may contain other assertions and statements as well, if
necessary.

_Important:_ We strongly recommend you to follow the convention of naming your
test case (not test) `*DeathTest` when it contains a death test, as
demonstrated in the above example. The `Death Tests And Threads` section below
explains why.

If a test fixture class is shared by normal tests and death tests, you
can use typedef to introduce an alias for the fixture class and avoid
duplicating its code:
```
class FooTest : public ::testing::Test { ... };

typedef FooTest FooDeathTest;

TEST_F(FooTest, DoesThis) {
  // normal test
}

TEST_F(FooDeathTest, DoesThat) {
  // death test
}
```

_Availability:_ Linux, Windows (requires MSVC 8.0 or above), Cygwin, and Mac (the latter three are supported since v1.3.0).  `(ASSERT|EXPECT)_DEATH_IF_SUPPORTED` are new in v1.4.0.

#### Regular Expression Syntax

On POSIX systems (e.g. Linux, Cygwin, and Mac), Google Test uses the
[POSIX extended regular expression](http://www.opengroup.org/onlinepubs/009695399/basedefs/xbd_chap09.html#tag_09_04)
syntax in death tests. To learn about this syntax, you may want to read this [Wikipedia entry](http://en.wikipedia.org/wiki/Regular_expression#POSIX_Extended_Regular_Expressions).

On Windows, Google Test uses its own simple regular expression
implementation. It lacks many features you can find in POSIX extended
regular expressions.  For example, we don't support union (`"x|y"`),
grouping (`"(xy)"`), brackets (`"[xy]"`), and repetition count
(`"x{5,7}"`), among others. Below is what we do support (`A` denotes a
literal character, period (`.`), or a single `\\` escape sequence; `x`
and `y` denote regular expressions.):

| `c` | matches any literal character `c` |
|:----|:----------------------------------|
| `\\d` | matches any decimal digit         |
| `\\D` | matches any character that's not a decimal digit |
| `\\f` | matches `\f`                      |
| `\\n` | matches `\n`                      |
| `\\r` | matches `\r`                      |
| `\\s` | matches any ASCII whitespace, including `\n` |
| `\\S` | matches any character that's not a whitespace |
| `\\t` | matches `\t`                      |
| `\\v` | matches `\v`                      |
| `\\w` | matches any letter, `_`, or decimal digit |
| `\\W` | matches any character that `\\w` doesn't match |
| `\\c` | matches any literal character `c`, which must be a punctuation |
| `.` | matches any single character except `\n` |
| `A?` | matches 0 or 1 occurrences of `A` |
| `A*` | matches 0 or many occurrences of `A` |
| `A+` | matches 1 or many occurrences of `A` |
| `^` | matches the beginning of a string (not that of each line) |
| `$` | matches the end of a string (not that of each line) |
| `xy` | matches `x` followed by `y`       |

To help you determine which capability is available on your system,
Google Test defines macro `GTEST_USES_POSIX_RE=1` when it uses POSIX
extended regular expressions, or `GTEST_USES_SIMPLE_RE=1` when it uses
the simple version.  If you want your death tests to work in both
cases, you can either `#if` on these macros or use the more limited
syntax only.

#### How It Works

Under the hood, `ASSERT_EXIT()` spawns a new process and executes the
death test statement in that process. The details of of how precisely
that happens depend on the platform and the variable
`::testing::GTEST_FLAG(death_test_style)` (which is initialized from the
command-line flag `--gtest_death_test_style`).

  * On POSIX systems, `fork()` (or `clone()` on Linux) is used to spawn the child, after which:
    * If the variable's value is `"fast"`, the death test statement is immediately executed.
    * If the variable's value is `"threadsafe"`, the child process re-executes the unit test binary just as it was originally invoked, but with some extra flags to cause just the single death test under consideration to be run.
  * On Windows, the child is spawned using the `CreateProcess()` API, and re-executes the binary to cause just the single death test under consideration to be run - much like the `threadsafe` mode on POSIX.

Other values for the variable are illegal and will cause the death test to
fail. Currently, the flag's default value is `"fast"`. However, we reserve the
right to change it in the future. Therefore, your tests should not depend on
this.

In either case, the parent process waits for the child process to complete, and checks that

  1. the child's exit status satisfies the predicate, and
  1. the child's stderr matches the regular expression.

If the death test statement runs to completion without dying, the child
process will nonetheless terminate, and the assertion fails.

#### Death Tests And Threads

The reason for the two death test styles has to do with thread safety. Due to
well-known problems with forking in the presence of threads, death tests should
be run in a single-threaded context. Sometimes, however, it isn't feasible to
arrange that kind of environment. For example, statically-initialized modules
may start threads before main is ever reached. Once threads have been created,
it may be difficult or impossible to clean them up.

Google Test has three features intended to raise awareness of threading issues.

  1. A warning is emitted if multiple threads are running when a death test is encountered.
  1. Test cases with a name ending in "DeathTest" are run before all other tests.
  1. It uses `clone()` instead of `fork()` to spawn the child process on Linux (`clone()` is not available on Cygwin and Mac), as `fork()` is more likely to cause the child to hang when the parent process has multiple threads.

It's perfectly fine to create threads inside a death test statement; they are
executed in a separate process and cannot affect the parent.

#### Death Test Styles

The "threadsafe" death test style was introduced in order to help mitigate the
risks of testing in a possibly multithreaded environment. It trades increased
test execution time (potentially dramatically so) for improved thread safety.
We suggest using the faster, default "fast" style unless your test has specific
problems with it.

You can choose a particular style of death tests by setting the flag
programmatically:

```
::testing::FLAGS_gtest_death_test_style = "threadsafe";
```

You can do this in `main()` to set the style for all death tests in the
binary, or in individual tests. Recall that flags are saved before running each
test and restored afterwards, so you need not do that yourself. For example:

```
TEST(MyDeathTest, TestOne) {
  ::testing::FLAGS_gtest_death_test_style = "threadsafe";
  // This test is run in the "threadsafe" style:
  ASSERT_DEATH(ThisShouldDie(), "");
}

TEST(MyDeathTest, TestTwo) {
  // This test is run in the "fast" style:
  ASSERT_DEATH(ThisShouldDie(), "");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  ::testing::FLAGS_gtest_death_test_style = "fast";
  return RUN_ALL_TESTS();
}
```

#### Caveats

The _statement_ argument of `ASSERT_EXIT()` can be any valid C++ statement.
If it leaves the current function via a `return` statement or by throwing an exception,
the death test is considered to have failed.  Some Google Test macros may return
from the current function (e.g. `ASSERT_TRUE()`), so be sure to avoid them in _statement_.

Since _statement_ runs in the child process, any in-memory side effect (e.g.
modifying a variable, releasing memory, etc) it causes will _not_ be observable
in the parent process. In particular, if you release memory in a death test,
your program will fail the heap check as the parent process will never see the
memory reclaimed. To solve this problem, you can

  1. try not to free memory in a death test;
  1. free the memory again in the parent process; or
  1. do not use the heap checker in your program.

Due to an implementation detail, you cannot place multiple death test
assertions on the same line; otherwise, compilation will fail with an unobvious
error message.

Despite the improved thread safety afforded by the "threadsafe" style of death
test, thread problems such as deadlock are still possible in the presence of
handlers registered with `pthread_atfork(3)`.

### Using Assertions in Sub-routines

#### Adding Traces to Assertions

If a test sub-routine is called from several places, when an assertion
inside it fails, it can be hard to tell which invocation of the
sub-routine the failure is from.  You can alleviate this problem using
extra logging or custom failure messages, but that usually clutters up
your tests. A better solution is to use the `SCOPED_TRACE` macro:

| `SCOPED_TRACE(`_message_`);` |
|:-----------------------------|

where _message_ can be anything streamable to `std::ostream`. This
macro will cause the current file name, line number, and the given
message to be added in every failure message. The effect will be
undone when the control leaves the current lexical scope.

For example,

```
10: void Sub1(int n) {
11:   EXPECT_EQ(1, Bar(n));
12:   EXPECT_EQ(2, Bar(n + 1));
13: }
14:
15: TEST(FooTest, Bar) {
16:   {
17:     SCOPED_TRACE("A");  // This trace point will be included in
18:                         // every failure in this scope.
19:     Sub1(1);
20:   }
21:   // Now it won't.
22:   Sub1(9);
23: }
```

could result in messages like these:

```
path/to/foo_test.cc:11: Failure
Value of: Bar(n)
Expected: 1
  Actual: 2
   Trace:
path/to/foo_test.cc:17: A

path/to/foo_test.cc:12: Failure
Value of: Bar(n + 1)
Expected: 2
  Actual: 3
```

Without the trace, it would've been difficult to know which invocation
of `Sub1()` the two failures come from respectively. (You could add an
extra message to each assertion in `Sub1()` to indicate the value of
`n`, but that's tedious.)

Some tips on using `SCOPED_TRACE`:

  1. With a suitable message, it's often enough to use `SCOPED_TRACE` at the beginning of a sub-routine, instead of at each call site.
  1. When calling sub-routines inside a loop, make the loop iterator part of the message in `SCOPED_TRACE` such that you can know which iteration the failure is from.
  1. Sometimes the line number of the trace point is enough for identifying the particular invocation of a sub-routine. In this case, you don't have to choose a unique message for `SCOPED_TRACE`. You can simply use `""`.
  1. You can use `SCOPED_TRACE` in an inner scope when there is one in the outer scope. In this case, all active trace points will be included in the failure messages, in reverse order they are encountered.
  1. The trace dump is clickable in Emacs' compilation buffer - hit return on a line number and you'll be taken to that line in the source file!

_Availability:_ Linux, Windows, Mac.

#### Propagating Fatal Failures

A common pitfall when using `ASSERT_*` and `FAIL*` is not understanding that
when they fail they only abort the _current function_, not the entire test. For
example, the following test will segfault:
```
void Subroutine() {
  // Generates a fatal failure and aborts the current function.
  ASSERT_EQ(1, 2);
  // The following won't be executed.
  ...
}

TEST(FooTest, Bar) {
  Subroutine();
  // The intended behavior is for the fatal failure
  // in Subroutine() to abort the entire test.
  // The actual behavior: the function goes on after Subroutine() returns.
  int* p = NULL;
  *p = 3; // Segfault!
}
```

Since we don't use exceptions, it is technically impossible to
implement the intended behavior here.  To alleviate this, Google Test
provides two solutions.  You could use either the
`(ASSERT|EXPECT)_NO_FATAL_FAILURE` assertions or the
`HasFatalFailure()` function.  They are described in the following two
subsections.

##### Asserting on Subroutines

As shown above, if your test calls a subroutine that has an `ASSERT_*`
failure in it, the test will continue after the subroutine
returns. This may not be what you want.

Often people want fatal failures to propagate like exceptions.  For
that Google Test offers the following macros:

| **Fatal assertion** | **Nonfatal assertion** | **Verifies** |
|:--------------------|:-----------------------|:-------------|
| `ASSERT_NO_FATAL_FAILURE(`_statement_`);` | `EXPECT_NO_FATAL_FAILURE(`_statement_`);` | _statement_ doesn't generate any new fatal failures in the current thread. |

Only failures in the thread that executes the assertion are checked to
determine the result of this type of assertions.  If _statement_
creates new threads, failures in these threads are ignored.

Examples:

```
ASSERT_NO_FATAL_FAILURE(Foo());

int i;
EXPECT_NO_FATAL_FAILURE({
  i = Bar();
});
```

_Availability:_ Linux, Windows, Mac. Assertions from multiple threads
are currently not supported.

##### Checking for Failures in the Current Test

`HasFatalFailure()` in the `::testing::Test` class returns `true` if an
assertion in the current test has suffered a fatal failure. This
allows functions to catch fatal failures in a sub-routine and return
early.

```
class Test {
 public:
  ...
  static bool HasFatalFailure();
};
```

The typical usage, which basically simulates the behavior of a thrown
exception, is:

```
TEST(FooTest, Bar) {
  Subroutine();
  // Aborts if Subroutine() had a fatal failure.
  if (HasFatalFailure())
    return;
  // The following won't be executed.
  ...
}
```

If `HasFatalFailure()` is used outside of `TEST()` , `TEST_F()` , or a test
fixture, you must add the `::testing::Test::` prefix, as in:

```
if (::testing::Test::HasFatalFailure())
  return;
```

Similarly, `HasNonfatalFailure()` returns `true` if the current test
has at least one non-fatal failure, and `HasFailure()` returns `true`
if the current test has at least one failure of either kind.

_Availability:_ Linux, Windows, Mac.  `HasNonfatalFailure()` and
`HasFailure()` are available since version 1.4.0.

### Logging Additional Information

In your test code, you can call `RecordProperty("key", value)` to log
additional information, where `value` can be either a C string or a 32-bit
integer. The _last_ value recorded for a key will be emitted to the XML output
if you specify one. For example, the test

```
TEST_F(WidgetUsageTest, MinAndMaxWidgets) {
  RecordProperty("MaximumWidgets", ComputeMaxUsage());
  RecordProperty("MinimumWidgets", ComputeMinUsage());
}
```

will output XML like this:

```
...
  <testcase name="MinAndMaxWidgets" status="run" time="6" classname="WidgetUsageTest"
            MaximumWidgets="12"
            MinimumWidgets="9" />
...
```

_Note_:
  * `RecordProperty()` is a static member of the `Test` class. Therefore it needs to be prefixed with `::testing::Test::` if used outside of the `TEST` body and the test fixture class.
  * `key` must be a valid XML attribute name, and cannot conflict with the ones already used by Google Test (`name`, `status`,     `time`, and `classname`).

_Availability_: Linux, Windows, Mac.

### Sharing Resources Between Tests in the Same Test Case



Google Test creates a new test fixture object for each test in order to make
tests independent and easier to debug. However, sometimes tests use resources
that are expensive to set up, making the one-copy-per-test model prohibitively
expensive.

If the tests don't change the resource, there's no harm in them sharing a
single resource copy. So, in addition to per-test set-up/tear-down, Google Test
also supports per-test-case set-up/tear-down. To use it:

  1. In your test fixture class (say `FooTest` ), define as `static` some member variables to hold the shared resources.
  1. In the same test fixture class, define a `static void SetUpTestCase()` function (remember not to spell it as **`SetupTestCase`** with a small `u`!) to set up the shared resources and a `static void TearDownTestCase()` function to tear them down.

That's it! Google Test automatically calls `SetUpTestCase()` before running the
_first test_ in the `FooTest` test case (i.e. before creating the first
`FooTest` object), and calls `TearDownTestCase()` after running the _last test_
in it (i.e. after deleting the last `FooTest` object). In between, the tests
can use the shared resources.

Remember that the test order is undefined, so your code can't depend on a test
preceding or following another. Also, the tests must either not modify the
state of any shared resource, or, if they do modify the state, they must
restore the state to its original value before passing control to the next
test.

Here's an example of per-test-case set-up and tear-down:
```
class FooTest : public ::testing::Test {
 protected:
  // Per-test-case set-up.
  // Called before the first test in this test case.
  // Can be omitted if not needed.
  static void SetUpTestCase() {
    shared_resource_ = new ...;
  }

  // Per-test-case tear-down.
  // Called after the last test in this test case.
  // Can be omitted if not needed.
  static void TearDownTestCase() {
    delete shared_resource_;
    shared_resource_ = NULL;
  }

  // You can define per-test set-up and tear-down logic as usual.
  virtual void SetUp() { ... }
  virtual void TearDown() { ... }

  // Some expensive resource shared by all tests.
  static T* shared_resource_;
};

T* FooTest::shared_resource_ = NULL;

TEST_F(FooTest, Test1) {
  ... you can refer to shared_resource here ...
}
TEST_F(FooTest, Test2) {
  ... you can refer to shared_resource here ...
}
```

_Availability:_ Linux, Windows, Mac.

### Global Set-Up and Tear-Down

Just as you can do set-up and tear-down at the test level and the test case
level, you can also do it at the test program level. Here's how.

First, you subclass the `::testing::Environment` class to define a test
environment, which knows how to set-up and tear-down:

```
class Environment {
 public:
  virtual ~Environment() {}
  // Override this to define how to set up the environment.
  virtual void SetUp() {}
  // Override this to define how to tear down the environment.
  virtual void TearDown() {}
};
```

Then, you register an instance of your environment class with Google Test by
calling the `::testing::AddGlobalTestEnvironment()` function:

```
Environment* AddGlobalTestEnvironment(Environment* env);
```

Now, when `RUN_ALL_TESTS()` is called, it first calls the `SetUp()` method of
the environment object, then runs the tests if there was no fatal failures, and
finally calls `TearDown()` of the environment object.

It's OK to register multiple environment objects. In this case, their `SetUp()`
will be called in the order they are registered, and their `TearDown()` will be
called in the reverse order.

Note that Google Test takes ownership of the registered environment objects.
Therefore **do not delete them** by yourself.

You should call `AddGlobalTestEnvironment()` before `RUN_ALL_TESTS()` is
called, probably in `main()`. If you use `gtest_main`, you need to      call
this before `main()` starts for it to take effect. One way to do this is to
define a global variable like this:

```
::testing::Environment* const foo_env = ::testing::AddGlobalTestEnvironment(new FooEnvironment);
```

However, we strongly recommend you to write your own `main()` and call
`AddGlobalTestEnvironment()` there, as relying on initialization of global
variables makes the code harder to read and may cause problems when you
register multiple environments from different translation units and the
environments have dependencies among them (remember that the compiler doesn't
guarantee the order in which global variables from different translation units
are initialized).

_Availability:_ Linux, Windows, Mac.


### Value Parameterized Tests

_Value-parameterized tests_ allow you to test your code with different
parameters without writing multiple copies of the same test.

Suppose you write a test for your code and then realize that your code is affected by a presence of a Boolean command line flag.

```
TEST(MyCodeTest, TestFoo) {
  // A code to test foo().
}
```

Usually people factor their test code into a function with a Boolean parameter in such situations. The function sets the flag, then executes the testing code.

```
void TestFooHelper(bool flag_value) {
  flag = flag_value;
  // A code to test foo().
}

TEST(MyCodeTest, TestFooo) {
  TestFooHelper(false);
  TestFooHelper(true);
}
```

But this setup has serious drawbacks. First, when a test assertion fails in your tests, it becomes unclear what value of the parameter caused it to fail. You can stream a clarifying message into your `EXPECT`/`ASSERT` statements, but it you'll have to do it with all of them. Second, you have to add one such helper function per test. What if you have ten tests? Twenty? A hundred?

Value-parameterized tests will let you write your test only once and then easily instantiate and run it with an arbitrary number of parameter values.

Here are some other situations when value-parameterized tests come handy:

  * You want to test different implementations of an OO interface.
  * You want to test your code over various inputs (a.k.a. data-driven testing). This feature is easy to abuse, so please exercise your good sense when doing it!

#### How to Write Value-Parameterized Tests

To write value-parameterized tests, first you should define a fixture
class.  It must be derived from both `::testing::Test` and
`::testing::WithParamInterface<T>` (the latter is a pure interface),
where `T` is the type of your parameter values.  For convenience, you
can just derive the fixture class from `::testing::TestWithParam<T>`,
which itself is derived from both `::testing::Test` and
`::testing::WithParamInterface<T>`. `T` can be any copyable type. If
it's a raw pointer, you are responsible for managing the lifespan of
the pointed values.

```
class FooTest : public ::testing::TestWithParam<const char*> {
  // You can implement all the usual fixture class members here.
  // To access the test parameter, call GetParam() from class
  // TestWithParam<T>.
};

// Or, when you want to add parameters to a pre-existing fixture class:
class BaseTest : public ::testing::Test {
  ...
};
class BarTest : public BaseTest,
                public ::testing::WithParamInterface<const char*> {
  ...
};
```

Then, use the `TEST_P` macro to define as many test patterns using
this fixture as you want.  The `_P` suffix is for "parameterized" or
"pattern", whichever you prefer to think.

```
TEST_P(FooTest, DoesBlah) {
  // Inside a test, access the test parameter with the GetParam() method
  // of the TestWithParam<T> class:
  EXPECT_TRUE(foo.Blah(GetParam()));
  ...
}

TEST_P(FooTest, HasBlahBlah) {
  ...
}
```

Finally, you can use `INSTANTIATE_TEST_CASE_P` to instantiate the test
case with any set of parameters you want. Google Test defines a number of
functions for generating test parameters. They return what we call
(surprise!) _parameter generators_. Here is a summary of them,
which are all in the `testing` namespace:

| `Range(begin, end[, step])` | Yields values `{begin, begin+step, begin+step+step, ...}`. The values do not include `end`. `step` defaults to 1. |
|:----------------------------|:------------------------------------------------------------------------------------------------------------------|
| `Values(v1, v2, ..., vN)`   | Yields values `{v1, v2, ..., vN}`.                                                                                |
| `ValuesIn(container)` and `ValuesIn(begin, end)` | Yields values from a C-style array, an STL-style container, or an iterator range `[begin, end)`. `container`, `begin`, and `end` can be expressions whose values are determined at run time.  |
| `Bool()`                    | Yields sequence `{false, true}`.                                                                                  |
| `Combine(g1, g2, ..., gN)`  | Yields all combinations (the Cartesian product for the math savvy) of the values generated by the `N` generators. This is only available if your system provides the `<tr1/tuple>` header. If you are sure your system does, and Google Test disagrees, you can override it by defining `GTEST_HAS_TR1_TUPLE=1`. See comments in [include/gtest/internal/gtest-port.h](../include/gtest/internal/gtest-port.h) for more information. |

For more details, see the comments at the definitions of these functions in the [source code](../include/gtest/gtest-param-test.h).

The following statement will instantiate tests from the `FooTest` test case
each with parameter values `"meeny"`, `"miny"`, and `"moe"`.

```
INSTANTIATE_TEST_CASE_P(InstantiationName,
                        FooTest,
                        ::testing::Values("meeny", "miny", "moe"));
```

To distinguish different instances of the pattern (yes, you can
instantiate it more than once), the first argument to
`INSTANTIATE_TEST_CASE_P` is a prefix that will be added to the actual
test case name. Remember to pick unique prefixes for different
instantiations. The tests from the instantiation above will have these
names:

  * `InstantiationName/FooTest.DoesBlah/0` for `"meeny"`
  * `InstantiationName/FooTest.DoesBlah/1` for `"miny"`
  * `InstantiationName/FooTest.DoesBlah/2` for `"moe"`
  * `InstantiationName/FooTest.HasBlahBlah/0` for `"meeny"`
  * `InstantiationName/FooTest.HasBlahBlah/1` for `"miny"`
  * `InstantiationName/FooTest.HasBlahBlah/2` for `"moe"`

You can use these names in [--gtest\-filter](#running-a-subset-of-the-tests).

This statement will instantiate all tests from `FooTest` again, each
with parameter values `"cat"` and `"dog"`:

```
const char* pets[] = {"cat", "dog"};
INSTANTIATE_TEST_CASE_P(AnotherInstantiationName, FooTest,
                        ::testing::ValuesIn(pets));
```

The tests from the instantiation above will have these names:

  * `AnotherInstantiationName/FooTest.DoesBlah/0` for `"cat"`
  * `AnotherInstantiationName/FooTest.DoesBlah/1` for `"dog"`
  * `AnotherInstantiationName/FooTest.HasBlahBlah/0` for `"cat"`
  * `AnotherInstantiationName/FooTest.HasBlahBlah/1` for `"dog"`

Please note that `INSTANTIATE_TEST_CASE_P` will instantiate _all_
tests in the given test case, whether their definitions come before or
_after_ the `INSTANTIATE_TEST_CASE_P` statement.

You can see
[these](../samples/sample7_unittest.cc)
[files](../samples/sample8_unittest.cc) for more examples.

_Availability_: Linux, Windows (requires MSVC 8.0 or above), Mac; since version 1.2.0.

#### Creating Value-Parameterized Abstract Tests

In the above, we define and instantiate `FooTest` in the same source
file. Sometimes you may want to define value-parameterized tests in a
library and let other people instantiate them later. This pattern is
known as <i>abstract tests</i>. As an example of its application, when you
are designing an interface you can write a standard suite of abstract
tests (perhaps using a factory function as the test parameter) that
all implementations of the interface are expected to pass. When
someone implements the interface, he can instantiate your suite to get
all the interface-conformance tests for free.

To define abstract tests, you should organize your code like this:

  1. Put the definition of the parameterized test fixture class (e.g. `FooTest`) in a header file, say `foo_param_test.h`. Think of this as _declaring_ your abstract tests.
  1. Put the `TEST_P` definitions in `foo_param_test.cc`, which includes `foo_param_test.h`. Think of this as _implementing_ your abstract tests.

Once they are defined, you can instantiate them by including
`foo_param_test.h`, invoking `INSTANTIATE_TEST_CASE_P()`, and linking
with `foo_param_test.cc`. You can instantiate the same abstract test
case multiple times, possibly in different source files.

### Typed Tests

Suppose you have multiple implementations of the same interface and
want to make sure that all of them satisfy some common requirements.
Or, you may have defined several types that are supposed to conform to
the same "concept" and you want to verify it.  In both cases, you want
the same test logic repeated for different types.

While you can write one `TEST` or `TEST_F` for each type you want to
test (and you may even factor the test logic into a function template
that you invoke from the `TEST`), it's tedious and doesn't scale:
if you want _m_ tests over _n_ types, you'll end up writing _m\*n_
`TEST`s.

_Typed tests_ allow you to repeat the same test logic over a list of
types.  You only need to write the test logic once, although you must
know the type list when writing typed tests.  Here's how you do it:

First, define a fixture class template.  It should be parameterized
by a type.  Remember to derive it from `::testing::Test`:

```
template <typename T>
class FooTest : public ::testing::Test {
 public:
  ...
  typedef std::list<T> List;
  static T shared_;
  T value_;
};
```

Next, associate a list of types with the test case, which will be
repeated for each type in the list:

```
typedef ::testing::Types<char, int, unsigned int> MyTypes;
TYPED_TEST_CASE(FooTest, MyTypes);
```

The `typedef` is necessary for the `TYPED_TEST_CASE` macro to parse
correctly.  Otherwise the compiler will think that each comma in the
type list introduces a new macro argument.

Then, use `TYPED_TEST()` instead of `TEST_F()` to define a typed test
for this test case.  You can repeat this as many times as you want:

```
TYPED_TEST(FooTest, DoesBlah) {
  // Inside a test, refer to the special name TypeParam to get the type
  // parameter.  Since we are inside a derived class template, C++ requires
  // us to visit the members of FooTest via 'this'.
  TypeParam n = this->value_;

  // To visit static members of the fixture, add the 'TestFixture::'
  // prefix.
  n += TestFixture::shared_;

  // To refer to typedefs in the fixture, add the 'typename TestFixture::'
  // prefix.  The 'typename' is required to satisfy the compiler.
  typename TestFixture::List values;
  values.push_back(n);
  ...
}

TYPED_TEST(FooTest, HasPropertyA) { ... }
```

You can see `samples/sample6_unittest.cc` for a complete example.

_Availability:_ Linux, Windows (requires MSVC 8.0 or above), Mac;
since version 1.1.0.

### Type-Parameterized Tests

_Type-parameterized tests_ are like typed tests, except that they
don't require you to know the list of types ahead of time.  Instead,
you can define the test logic first and instantiate it with different
type lists later.  You can even instantiate it more than once in the
same program.

If you are designing an interface or concept, you can define a suite
of type-parameterized tests to verify properties that any valid
implementation of the interface/concept should have.  Then, the author
of each implementation can just instantiate the test suite with his
type to verify that it conforms to the requirements, without having to
write similar tests repeatedly.  Here's an example:

First, define a fixture class template, as we did with typed tests:

```
template <typename T>
class FooTest : public ::testing::Test {
  ...
};
```

Next, declare that you will define a type-parameterized test case:

```
TYPED_TEST_CASE_P(FooTest);
```

The `_P` suffix is for "parameterized" or "pattern", whichever you
prefer to think.

Then, use `TYPED_TEST_P()` to define a type-parameterized test.  You
can repeat this as many times as you want:

```
TYPED_TEST_P(FooTest, DoesBlah) {
  // Inside a test, refer to TypeParam to get the type parameter.
  TypeParam n = 0;
  ...
}

TYPED_TEST_P(FooTest, HasPropertyA) { ... }
```

Now the tricky part: you need to register all test patterns using the
`REGISTER_TYPED_TEST_CASE_P` macro before you can instantiate them.
The first argument of the macro is the test case name; the rest are
the names of the tests in this test case:

```
REGISTER_TYPED_TEST_CASE_P(FooTest,
                           DoesBlah, HasPropertyA);
```

Finally, you are free to instantiate the pattern with the types you
want.  If you put the above code in a header file, you can `#include`
it in multiple C++ source files and instantiate it multiple times.

```
typedef ::testing::Types<char, int, unsigned int> MyTypes;
INSTANTIATE_TYPED_TEST_CASE_P(My, FooTest, MyTypes);
```

To distinguish different instances of the pattern, the first argument
to the `INSTANTIATE_TYPED_TEST_CASE_P` macro is a prefix that will be
added to the actual test case name.  Remember to pick unique prefixes
for different instances.

In the special case where the type list contains only one type, you
can write that type directly without `::testing::Types<...>`, like this:

```
INSTANTIATE_TYPED_TEST_CASE_P(My, FooTest, int);
```

You can see `samples/sample6_unittest.cc` for a complete example.

_Availability:_ Linux, Windows (requires MSVC 8.0 or above), Mac;
since version 1.1.0.

### Testing Private Code

If you change your software's internal implementation, your tests should not
break as long as the change is not observable by users. Therefore, per the
_black-box testing principle_, most of the time you should test your code
through its public interfaces.

If you still find yourself needing to test internal implementation code,
consider if there's a better design that wouldn't require you to do so. If you
absolutely have to test non-public interface code though, you can. There are
two cases to consider:

  * Static functions (_not_ the same as static member functions!) or unnamed namespaces, and
  * Private or protected class members

#### Static Functions

Both static functions and definitions/declarations in an unnamed namespace are
only visible within the same translation unit. To test them, you can `#include`
the entire `.cc` file being tested in your `*_test.cc` file. (`#include`ing `.cc`
files is not a good way to reuse code - you should not do this in production
code!)

However, a better approach is to move the private code into the
`foo::internal` namespace, where `foo` is the namespace your project normally
uses, and put the private declarations in a `*-internal.h` file. Your
production `.cc` files and your tests are allowed to include this internal
header, but your clients are not. This way, you can fully test your internal
implementation without leaking it to your clients.

#### Private Class Members

Private class members are only accessible from within the class or by friends.
To access a class' private members, you can declare your test fixture as a
friend to the class and define accessors in your fixture. Tests using the
fixture can then access the private members of your production class via the
accessors in the fixture. Note that even though your fixture is a friend to
your production class, your tests are not automatically friends to it, as they
are technically defined in sub-classes of the fixture.

Another way to test private members is to refactor them into an implementation
class, which is then declared in a `*-internal.h` file. Your clients aren't
allowed to include this header but your tests can. Such is called the Pimpl
(Private Implementation) idiom.

Or, you can declare an individual test as a friend of your class by adding this
line in the class body:

```
FRIEND_TEST(TestCaseName, TestName);
```

For example,
```
// foo.h
#include "gtest/gtest_prod.h"

// Defines FRIEND_TEST.
class Foo {
  ...
 private:
  FRIEND_TEST(FooTest, BarReturnsZeroOnNull);
  int Bar(void* x);
};

// foo_test.cc
...
TEST(FooTest, BarReturnsZeroOnNull) {
  Foo foo;
  EXPECT_EQ(0, foo.Bar(NULL));
  // Uses Foo's private member Bar().
}
```

Pay special attention when your class is defined in a namespace, as you should
define your test fixtures and tests in the same namespace if you want them to
be friends of your class. For example, if the code to be tested looks like:

```
namespace my_namespace {

class Foo {
  friend class FooTest;
  FRIEND_TEST(FooTest, Bar);
  FRIEND_TEST(FooTest, Baz);
  ...
  definition of the class Foo
  ...
};

}  // namespace my_namespace
```

Your test code should be something like:

```
namespace my_namespace {
class FooTest : public ::testing::Test {
 protected:
  ...
};

TEST_F(FooTest, Bar) { ... }
TEST_F(FooTest, Baz) { ... }

}  // namespace my_namespace
```

### Catching Failures

If you are building a testing utility on top of Google Test, you'll
want to test your utility.  What framework would you use to test it?
Google Test, of course.

The challenge is to verify that your testing utility reports failures
correctly.  In frameworks that report a failure by throwing an
exception, you could catch the exception and assert on it.  But Google
Test doesn't use exceptions, so how do we test that a piece of code
generates an expected failure?

`"gtest/gtest-spi.h"` contains some constructs to do this.  After
`#include`ing this header, you can use

| `EXPECT_FATAL_FAILURE(`_statement, substring_`);` |
|:--------------------------------------------------|

to assert that _statement_ generates a fatal (e.g. `ASSERT_*`) failure
whose message contains the given _substring_, or use

| `EXPECT_NONFATAL_FAILURE(`_statement, substring_`);` |
|:-----------------------------------------------------|

if you are expecting a non-fatal (e.g. `EXPECT_*`) failure.

For technical reasons, there are some caveats:

  1. You cannot stream a failure message to either macro.
  1. _statement_ in `EXPECT_FATAL_FAILURE()` cannot reference local non-static variables or non-static members of `this` object.
  1. _statement_ in `EXPECT_FATAL_FAILURE()` cannot return a value.

_Note:_ Google Test is designed with threads in mind.  Once the
synchronization primitives in `"gtest/internal/gtest-port.h"` have
been implemented, Google Test will become thread-safe, meaning that
you can then use assertions in multiple threads concurrently.  Before

that, however, Google Test only supports single-threaded usage.  Once
thread-safe, `EXPECT_FATAL_FAILURE()` and `EXPECT_NONFATAL_FAILURE()`
will capture failures in the current thread only. If _statement_
creates new threads, failures in these threads will be ignored.  If
you want to capture failures from all threads instead, you should use
the following macros:

| `EXPECT_FATAL_FAILURE_ON_ALL_THREADS(`_statement, substring_`);` |
|:-----------------------------------------------------------------|
| `EXPECT_NONFATAL_FAILURE_ON_ALL_THREADS(`_statement, substring_`);` |

### Getting the Current Test's Name

Sometimes a function may need to know the name of the currently running test.
For example, you may be using the `SetUp()` method of your test fixture to set
the golden file name based on which test is running. The `::testing::TestInfo`
class has this information:

```
namespace testing {

class TestInfo {
 public:
  // Returns the test case name and the test name, respectively.
  //
  // Do NOT delete or free the return value - it's managed by the
  // TestInfo class.
  const char* test_case_name() const;
  const char* name() const;
};

}  // namespace testing
```

> To obtain a `TestInfo` object for the currently running test, call
`current_test_info()` on the `UnitTest` singleton object:

```
// Gets information about the currently running test.
// Do NOT delete the returned object - it's managed by the UnitTest class.
const ::testing::TestInfo* const test_info =
  ::testing::UnitTest::GetInstance()->current_test_info();
printf("We are in test %s of test case %s.\n",
       test_info->name(), test_info->test_case_name());
```

`current_test_info()` returns a null pointer if no test is running. In
particular, you cannot find the test case name in `TestCaseSetUp()`,
`TestCaseTearDown()` (where you know the test case name implicitly), or
functions called from them.

_Availability:_ Linux, Windows, Mac.

### Extending Google Test by Handling Test Events

Google Test provides an <b>event listener API</b> to let you receive
notifications about the progress of a test program and test
failures. The events you can listen to include the start and end of
the test program, a test case, or a test method, among others. You may
use this API to augment or replace the standard console output,
replace the XML output, or provide a completely different form of
output, such as a GUI or a database. You can also use test events as
checkpoints to implement a resource leak checker, for example.

_Availability:_ Linux, Windows, Mac; since v1.4.0.

#### Defining Event Listeners

To define a event listener, you subclass either
[testing::TestEventListener](../include/gtest/gtest.h#L855)
or [testing::EmptyTestEventListener](../include/gtest/gtest.h#L905).
The former is an (abstract) interface, where <i>each pure virtual method<br>
can be overridden to handle a test event</i> (For example, when a test
starts, the `OnTestStart()` method will be called.). The latter provides
an empty implementation of all methods in the interface, such that a
subclass only needs to override the methods it cares about.

When an event is fired, its context is passed to the handler function
as an argument. The following argument types are used:
  * [UnitTest](../include/gtest/gtest.h#L1007) reflects the state of the entire test program,
  * [TestCase](../include/gtest/gtest.h#L689) has information about a test case, which can contain one or more tests,
  * [TestInfo](../include/gtest/gtest.h#L599) contains the state of a test, and
  * [TestPartResult](../include/gtest/gtest-test-part.h#L42) represents the result of a test assertion.

An event handler function can examine the argument it receives to find
out interesting information about the event and the test program's
state.  Here's an example:

```
  class MinimalistPrinter : public ::testing::EmptyTestEventListener {
    // Called before a test starts.
    virtual void OnTestStart(const ::testing::TestInfo& test_info) {
      printf("*** Test %s.%s starting.\n",
             test_info.test_case_name(), test_info.name());
    }

    // Called after a failed assertion or a SUCCEED() invocation.
    virtual void OnTestPartResult(
        const ::testing::TestPartResult& test_part_result) {
      printf("%s in %s:%d\n%s\n",
             test_part_result.failed() ? "*** Failure" : "Success",
             test_part_result.file_name(),
             test_part_result.line_number(),
             test_part_result.summary());
    }

    // Called after a test ends.
    virtual void OnTestEnd(const ::testing::TestInfo& test_info) {
      printf("*** Test %s.%s ending.\n",
             test_info.test_case_name(), test_info.name());
    }
  };
```

#### Using Event Listeners

To use the event listener you have defined, add an instance of it to
the Google Test event listener list (represented by class
[TestEventListeners](../include/gtest/gtest.h#L929)
- note the "s" at the end of the name) in your
`main()` function, before calling `RUN_ALL_TESTS()`:
```
int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  // Gets hold of the event listener list.
  ::testing::TestEventListeners& listeners =
      ::testing::UnitTest::GetInstance()->listeners();
  // Adds a listener to the end.  Google Test takes the ownership.
  listeners.Append(new MinimalistPrinter);
  return RUN_ALL_TESTS();
}
```

There's only one problem: the default test result printer is still in
effect, so its output will mingle with the output from your minimalist
printer. To suppress the default printer, just release it from the
event listener list and delete it. You can do so by adding one line:
```
  ...
  delete listeners.Release(listeners.default_result_printer());
  listeners.Append(new MinimalistPrinter);
  return RUN_ALL_TESTS();
```

Now, sit back and enjoy a completely different output from your
tests. For more details, you can read this
[sample](../samples/sample9_unittest.cc).

You may append more than one listener to the list. When an `On*Start()`
or `OnTestPartResult()` event is fired, the listeners will receive it in
the order they appear in the list (since new listeners are added to
the end of the list, the default text printer and the default XML
generator will receive the event first). An `On*End()` event will be
received by the listeners in the _reverse_ order. This allows output by
listeners added later to be framed by output from listeners added
earlier.

#### Generating Failures in Listeners

You may use failure-raising macros (`EXPECT_*()`, `ASSERT_*()`,
`FAIL()`, etc) when processing an event. There are some restrictions:

  1. You cannot generate any failure in `OnTestPartResult()` (otherwise it will cause `OnTestPartResult()` to be called recursively).
  1. A listener that handles `OnTestPartResult()` is not allowed to generate any failure.

When you add listeners to the listener list, you should put listeners
that handle `OnTestPartResult()` _before_ listeners that can generate
failures. This ensures that failures generated by the latter are
attributed to the right test by the former.

We have a sample of failure-raising listener
[here](../samples/sample10_unittest.cc).

### Running Test Programs: Advanced Options

Google Test test programs are ordinary executables. Once built, you can run
them directly and affect their behavior via the following environment variables
and/or command line flags. For the flags to work, your programs must call
`::testing::InitGoogleTest()` before calling `RUN_ALL_TESTS()`.

To see a list of supported flags and their usage, please run your test
program with the `--help` flag.  You can also use `-h`, `-?`, or `/?`
for short.  This feature is added in version 1.3.0.

If an option is specified both by an environment variable and by a
flag, the latter takes precedence.  Most of the options can also be
set/read in code: to access the value of command line flag
`--gtest_foo`, write `::testing::GTEST_FLAG(foo)`.  A common pattern is
to set the value of a flag before calling `::testing::InitGoogleTest()`
to change the default value of the flag:
```
int main(int argc, char** argv) {
  // Disables elapsed time by default.
  ::testing::GTEST_FLAG(print_time) = false;

  // This allows the user to override the flag on the command line.
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
```

#### Selecting Tests

This section shows various options for choosing which tests to run.

##### Listing Test Names

Sometimes it is necessary to list the available tests in a program before
running them so that a filter may be applied if needed. Including the flag
`--gtest_list_tests` overrides all other flags and lists tests in the following
format:
```
TestCase1.
  TestName1
  TestName2
TestCase2.
  TestName
```

None of the tests listed are actually run if the flag is provided. There is no
corresponding environment variable for this flag.

_Availability:_ Linux, Windows, Mac.

##### Running a Subset of the Tests

By default, a Google Test program runs all tests the user has defined.
Sometimes, you want to run only a subset of the tests (e.g. for debugging or
quickly verifying a change). If you set the `GTEST_FILTER` environment variable
or the `--gtest_filter` flag to a filter string, Google Test will only run the
tests whose full names (in the form of `TestCaseName.TestName`) match the
filter.

The format of a filter is a '`:`'-separated list of wildcard patterns (called
the positive patterns) optionally followed by a '`-`' and another
'`:`'-separated pattern list (called the negative patterns). A test matches the
filter if and only if it matches any of the positive patterns but does not
match any of the negative patterns.

A pattern may contain `'*'` (matches any string) or `'?'` (matches any single
character). For convenience, the filter `'*-NegativePatterns'` can be also
written as `'-NegativePatterns'`.

For example:

  * `./foo_test` Has no flag, and thus runs all its tests.
  * `./foo_test --gtest_filter=*` Also runs everything, due to the single match-everything `*` value.
  * `./foo_test --gtest_filter=FooTest.*` Runs everything in test case `FooTest`.
  * `./foo_test --gtest_filter=*Null*:*Constructor*` Runs any test whose full name contains either `"Null"` or `"Constructor"`.
  * `./foo_test --gtest_filter=-*DeathTest.*` Runs all non-death tests.
  * `./foo_test --gtest_filter=FooTest.*-FooTest.Bar` Runs everything in test case `FooTest` except `FooTest.Bar`.

_Availability:_ Linux, Windows, Mac.

##### Temporarily Disabling Tests

If you have a broken test that you cannot fix right away, you can add the
`DISABLED_` prefix to its name. This will exclude it from execution. This is
better than commenting out the code or using `#if 0`, as disabled tests are
still compiled (and thus won't rot).

If you need to disable all tests in a test case, you can either add `DISABLED_`
to the front of the name of each test, or alternatively add it to the front of
the test case name.

For example, the following tests won't be run by Google Test, even though they
will still be compiled:

```
// Tests that Foo does Abc.
TEST(FooTest, DISABLED_DoesAbc) { ... }

class DISABLED_BarTest : public ::testing::Test { ... };

// Tests that Bar does Xyz.
TEST_F(DISABLED_BarTest, DoesXyz) { ... }
```

_Note:_ This feature should only be used for temporary pain-relief. You still
have to fix the disabled tests at a later date. As a reminder, Google Test will
print a banner warning you if a test program contains any disabled tests.

_Tip:_ You can easily count the number of disabled tests you have
using `grep`. This number can be used as a metric for improving your
test quality.

_Availability:_ Linux, Windows, Mac.

##### Temporarily Enabling Disabled Tests

To include [disabled tests](#temporarily-disabling-tests) in test
execution, just invoke the test program with the
`--gtest_also_run_disabled_tests` flag or set the
`GTEST_ALSO_RUN_DISABLED_TESTS` environment variable to a value other
than `0`.  You can combine this with the
[--gtest\-filter](#running-a-subset-of-the_tests) flag to further select
which disabled tests to run.

_Availability:_ Linux, Windows, Mac; since version 1.3.0.

#### Repeating the Tests

Once in a while you'll run into a test whose result is hit-or-miss. Perhaps it
will fail only 1% of the time, making it rather hard to reproduce the bug under
a debugger. This can be a major source of frustration.

The `--gtest_repeat` flag allows you to repeat all (or selected) test methods
in a program many times. Hopefully, a flaky test will eventually fail and give
you a chance to debug. Here's how to use it:

| `$ foo_test --gtest_repeat=1000` | Repeat foo\_test 1000 times and don't stop at failures. |
|:---------------------------------|:--------------------------------------------------------|
| `$ foo_test --gtest_repeat=-1`   | A negative count means repeating forever.               |
| `$ foo_test --gtest_repeat=1000 --gtest_break_on_failure` | Repeat foo\_test 1000 times, stopping at the first failure. This is especially useful when running under a debugger: when the testfails, it will drop into the debugger and you can then inspect variables and stacks. |
| `$ foo_test --gtest_repeat=1000 --gtest_filter=FooBar` | Repeat the tests whose name matches the filter 1000 times. |

If your test program contains global set-up/tear-down code registered
using `AddGlobalTestEnvironment()`, it will be repeated in each
iteration as well, as the flakiness may be in it. You can also specify
the repeat count by setting the `GTEST_REPEAT` environment variable.

_Availability:_ Linux, Windows, Mac.

#### Shuffling the Tests

You can specify the `--gtest_shuffle` flag (or set the `GTEST_SHUFFLE`
environment variable to `1`) to run the tests in a program in a random
order. This helps to reveal bad dependencies between tests.

By default, Google Test uses a random seed calculated from the current
time. Therefore you'll get a different order every time. The console
output includes the random seed value, such that you can reproduce an
order-related test failure later. To specify the random seed
explicitly, use the `--gtest_random_seed=SEED` flag (or set the
`GTEST_RANDOM_SEED` environment variable), where `SEED` is an integer
between 0 and 99999. The seed value 0 is special: it tells Google Test
to do the default behavior of calculating the seed from the current
time.

If you combine this with `--gtest_repeat=N`, Google Test will pick a
different random seed and re-shuffle the tests in each iteration.

_Availability:_ Linux, Windows, Mac; since v1.4.0.

#### Controlling Test Output

This section teaches how to tweak the way test results are reported.

##### Colored Terminal Output

Google Test can use colors in its terminal output to make it easier to spot
the separation between tests, and whether tests passed.

You can set the GTEST\_COLOR environment variable or set the `--gtest_color`
command line flag to `yes`, `no`, or `auto` (the default) to enable colors,
disable colors, or let Google Test decide. When the value is `auto`, Google
Test will use colors if and only if the output goes to a terminal and (on
non-Windows platforms) the `TERM` environment variable is set to `xterm` or
`xterm-color`.

_Availability:_ Linux, Windows, Mac.

##### Suppressing the Elapsed Time

By default, Google Test prints the time it takes to run each test.  To
suppress that, run the test program with the `--gtest_print_time=0`
command line flag.  Setting the `GTEST_PRINT_TIME` environment
variable to `0` has the same effect.

_Availability:_ Linux, Windows, Mac.  (In Google Test 1.3.0 and lower,
the default behavior is that the elapsed time is **not** printed.)

##### Generating an XML Report

Google Test can emit a detailed XML report to a file in addition to its normal
textual output. The report contains the duration of each test, and thus can
help you identify slow tests.

To generate the XML report, set the `GTEST_OUTPUT` environment variable or the
`--gtest_output` flag to the string `"xml:_path_to_output_file_"`, which will
create the file at the given location. You can also just use the string
`"xml"`, in which case the output can be found in the `test_detail.xml` file in
the current directory.

If you specify a directory (for example, `"xml:output/directory/"` on Linux or
`"xml:output\directory\"` on Windows), Google Test will create the XML file in
that directory, named after the test executable (e.g. `foo_test.xml` for test
program `foo_test` or `foo_test.exe`). If the file already exists (perhaps left
over from a previous run), Google Test will pick a different name (e.g.
`foo_test_1.xml`) to avoid overwriting it.

The report uses the format described here.  It is based on the
`junitreport` Ant task and can be parsed by popular continuous build
systems like [Hudson](https://hudson.dev.java.net/). Since that format
was originally intended for Java, a little interpretation is required
to make it apply to Google Test tests, as shown here:

```
<testsuites name="AllTests" ...>
  <testsuite name="test_case_name" ...>
    <testcase name="test_name" ...>
      <failure message="..."/>
      <failure message="..."/>
      <failure message="..."/>
    </testcase>
  </testsuite>
</testsuites>
```

  * The root `<testsuites>` element corresponds to the entire test program.
  * `<testsuite>` elements correspond to Google Test test cases.
  * `<testcase>` elements correspond to Google Test test functions.

For instance, the following program

```
TEST(MathTest, Addition) { ... }
TEST(MathTest, Subtraction) { ... }
TEST(LogicTest, NonContradiction) { ... }
```

could generate this report:

```
<?xml version="1.0" encoding="UTF-8"?>
<testsuites tests="3" failures="1" errors="0" time="35" name="AllTests">
  <testsuite name="MathTest" tests="2" failures="1" errors="0" time="15">
    <testcase name="Addition" status="run" time="7" classname="">
      <failure message="Value of: add(1, 1)&#x0A; Actual: 3&#x0A;Expected: 2" type=""/>
      <failure message="Value of: add(1, -1)&#x0A; Actual: 1&#x0A;Expected: 0" type=""/>
    </testcase>
    <testcase name="Subtraction" status="run" time="5" classname="">
    </testcase>
  </testsuite>
  <testsuite name="LogicTest" tests="1" failures="0" errors="0" time="5">
    <testcase name="NonContradiction" status="run" time="5" classname="">
    </testcase>
  </testsuite>
</testsuites>
```

Things to note:

  * The `tests` attribute of a `<testsuites>` or `<testsuite>` element tells how many test functions the Google Test program or test case contains, while the `failures` attribute tells how many of them failed.
  * The `time` attribute expresses the duration of the test, test case, or entire test program in milliseconds.
  * Each `<failure>` element corresponds to a single failed Google Test assertion.
  * Some JUnit concepts don't apply to Google Test, yet we have to conform to the DTD. Therefore you'll see some dummy elements and attributes in the report. You can safely ignore these parts.

_Availability:_ Linux, Windows, Mac.

#### Controlling How Failures Are Reported

##### Turning Assertion Failures into Break-Points

When running test programs under a debugger, it's very convenient if the
debugger can catch an assertion failure and automatically drop into interactive
mode. Google Test's _break-on-failure_ mode supports this behavior.

To enable it, set the `GTEST_BREAK_ON_FAILURE` environment variable to a value
other than `0` . Alternatively, you can use the `--gtest_break_on_failure`
command line flag.

_Availability:_ Linux, Windows, Mac.

##### Disabling Catching Test-Thrown Exceptions

Google Test can be used either with or without exceptions enabled.  If
a test throws a C++ exception or (on Windows) a structured exception
(SEH), by default Google Test catches it, reports it as a test
failure, and continues with the next test method.  This maximizes the
coverage of a test run.  Also, on Windows an uncaught exception will
cause a pop-up window, so catching the exceptions allows you to run
the tests automatically.

When debugging the test failures, however, you may instead want the
exceptions to be handled by the debugger, such that you can examine
the call stack when an exception is thrown.  To achieve that, set the
`GTEST_CATCH_EXCEPTIONS` environment variable to `0`, or use the
`--gtest_catch_exceptions=0` flag when running the tests.

**Availability**: Linux, Windows, Mac.

##### Letting Another Testing Framework Drive

If you work on a project that has already been using another testing
framework and is not ready to completely switch to Google Test yet,
you can get much of Google Test's benefit by using its assertions in
your existing tests.  Just change your `main()` function to look
like:

```
#include "gtest/gtest.h"

int main(int argc, char** argv) {
  ::testing::GTEST_FLAG(throw_on_failure) = true;
  // Important: Google Test must be initialized.
  ::testing::InitGoogleTest(&argc, argv);

  ... whatever your existing testing framework requires ...
}
```

With that, you can use Google Test assertions in addition to the
native assertions your testing framework provides, for example:

```
void TestFooDoesBar() {
  Foo foo;
  EXPECT_LE(foo.Bar(1), 100);     // A Google Test assertion.
  CPPUNIT_ASSERT(foo.IsEmpty());  // A native assertion.
}
```

If a Google Test assertion fails, it will print an error message and
throw an exception, which will be treated as a failure by your host
testing framework.  If you compile your code with exceptions disabled,
a failed Google Test assertion will instead exit your program with a
non-zero code, which will also signal a test failure to your test
runner.

If you don't write `::testing::GTEST_FLAG(throw_on_failure) = true;` in
your `main()`, you can alternatively enable this feature by specifying
the `--gtest_throw_on_failure` flag on the command-line or setting the
`GTEST_THROW_ON_FAILURE` environment variable to a non-zero value.

_Availability:_ Linux, Windows, Mac; since v1.3.0.

#### Distributing Test Functions to Multiple Machines

If you have more than one machine you can use to run a test program,
you might want to run the test functions in parallel and get the
result faster.  We call this technique _sharding_, where each machine
is called a _shard_.

Google Test is compatible with test sharding.  To take advantage of
this feature, your test runner (not part of Google Test) needs to do
the following:

  1. Allocate a number of machines (shards) to run the tests.
  1. On each shard, set the `GTEST_TOTAL_SHARDS` environment variable to the total number of shards.  It must be the same for all shards.
  1. On each shard, set the `GTEST_SHARD_INDEX` environment variable to the index of the shard.  Different shards must be assigned different indices, which must be in the range `[0, GTEST_TOTAL_SHARDS - 1]`.
  1. Run the same test program on all shards.  When Google Test sees the above two environment variables, it will select a subset of the test functions to run.  Across all shards, each test function in the program will be run exactly once.
  1. Wait for all shards to finish, then collect and report the results.

Your project may have tests that were written without Google Test and
thus don't understand this protocol.  In order for your test runner to
figure out which test supports sharding, it can set the environment
variable `GTEST_SHARD_STATUS_FILE` to a non-existent file path.  If a
test program supports sharding, it will create this file to
acknowledge the fact (the actual contents of the file are not
important at this time; although we may stick some useful information
in it in the future.); otherwise it will not create it.

Here's an example to make it clear.  Suppose you have a test program
`foo_test` that contains the following 5 test functions:
```
TEST(A, V)
TEST(A, W)
TEST(B, X)
TEST(B, Y)
TEST(B, Z)
```
and you have 3 machines at your disposal.  To run the test functions in
parallel, you would set `GTEST_TOTAL_SHARDS` to 3 on all machines, and
set `GTEST_SHARD_INDEX` to 0, 1, and 2 on the machines respectively.
Then you would run the same `foo_test` on each machine.

Google Test reserves the right to change how the work is distributed
across the shards, but here's one possible scenario:

  * Machine #0 runs `A.V` and `B.X`.
  * Machine #1 runs `A.W` and `B.Y`.
  * Machine #2 runs `B.Z`.

_Availability:_ Linux, Windows, Mac; since version 1.3.0.

### Fusing Google Test Source Files

Google Test's implementation consists of ~30 files (excluding its own
tests).  Sometimes you may want them to be packaged up in two files (a
`.h` and a `.cc`) instead, such that you can easily copy them to a new
machine and start hacking there.  For this we provide an experimental
Python script `fuse_gtest_files.py` in the `scripts/` directory (since release 1.3.0).
Assuming you have Python 2.4 or above installed on your machine, just
go to that directory and run
```
python fuse_gtest_files.py OUTPUT_DIR
```

and you should see an `OUTPUT_DIR` directory being created with files
`gtest/gtest.h` and `gtest/gtest-all.cc` in it.  These files contain
everything you need to use Google Test.  Just copy them to anywhere
you want and you are ready to write tests.  You can use the
[scripts/test/Makefile](../scripts/test/Makefile)
file as an example on how to compile your tests against them.

### Where to Go from Here

Congratulations! You've now learned more advanced Google Test tools and are
ready to tackle more complex testing tasks. If you want to dive even deeper, you
can read the [Frequently-Asked Questions](V1_6_FAQ.md).

---

## Cheat Sheet

### Defining a Mock Class

#### Mocking a Normal Class

Given
```
class Foo {
  ...
  virtual ~Foo();
  virtual int GetSize() const = 0;
  virtual string Describe(const char* name) = 0;
  virtual string Describe(int type) = 0;
  virtual bool Process(Bar elem, int count) = 0;
};
```
(note that `~Foo()` **must** be virtual) we can define its mock as
```
#include "gmock/gmock.h"

class MockFoo : public Foo {
  MOCK_CONST_METHOD0(GetSize, int());
  MOCK_METHOD1(Describe, string(const char* name));
  MOCK_METHOD1(Describe, string(int type));
  MOCK_METHOD2(Process, bool(Bar elem, int count));
};
```

To create a "nice" mock object which ignores all uninteresting calls,
or a "strict" mock object, which treats them as failures:
```
NiceMock<MockFoo> nice_foo;     // The type is a subclass of MockFoo.
StrictMock<MockFoo> strict_foo; // The type is a subclass of MockFoo.
```

#### Mocking a Class Template

To mock
```
template <typename Elem>
class StackInterface {
 public:
  ...
  virtual ~StackInterface();
  virtual int GetSize() const = 0;
  virtual void Push(const Elem& x) = 0;
};
```
(note that `~StackInterface()` **must** be virtual) just append `_T` to the `MOCK_*` macros:
```
template <typename Elem>
class MockStack : public StackInterface<Elem> {
 public:
  ...
  MOCK_CONST_METHOD0_T(GetSize, int());
  MOCK_METHOD1_T(Push, void(const Elem& x));
};
```

#### Specifying Calling Conventions for Mock Functions

If your mock function doesn't use the default calling convention, you
can specify it by appending `_WITH_CALLTYPE` to any of the macros
described in the previous two sections and supplying the calling
convention as the first argument to the macro. For example,
```
  MOCK_METHOD_1_WITH_CALLTYPE(STDMETHODCALLTYPE, Foo, bool(int n));
  MOCK_CONST_METHOD2_WITH_CALLTYPE(STDMETHODCALLTYPE, Bar, int(double x, double y));
```
where `STDMETHODCALLTYPE` is defined by `<objbase.h>` on Windows.

### Using Mocks in Tests

The typical flow is:
  1. Import the Google Mock names you need to use. All Google Mock names are in the `testing` namespace unless they are macros or otherwise noted.
  1. Create the mock objects.
  1. Optionally, set the default actions of the mock objects.
  1. Set your expectations on the mock objects (How will they be called? What wil they do?).
  1. Exercise code that uses the mock objects; if necessary, check the result using [Google Test](../../googletest/) assertions.
  1. When a mock objects is destructed, Google Mock automatically verifies that all expectations on it have been satisfied.

Here is an example:
```
using ::testing::Return;                            // #1

TEST(BarTest, DoesThis) {
  MockFoo foo;                                    // #2

  ON_CALL(foo, GetSize())                         // #3
      .WillByDefault(Return(1));
  // ... other default actions ...

  EXPECT_CALL(foo, Describe(5))                   // #4
      .Times(3)
      .WillRepeatedly(Return("Category 5"));
  // ... other expectations ...

  EXPECT_EQ("good", MyProductionFunction(&foo));  // #5
}                                                 // #6
```

### Setting Default Actions

Google Mock has a **built-in default action** for any function that
returns `void`, `bool`, a numeric value, or a pointer.

To customize the default action for functions with return type `T` globally:
```
using ::testing::DefaultValue;

// Sets the default value to be returned. T must be CopyConstructible.
DefaultValue<T>::Set(value);
// Sets a factory. Will be invoked on demand. T must be MoveConstructible.
//   T MakeT();
DefaultValue<T>::SetFactory(&MakeT);
// ... use the mocks ...
// Resets the default value.
DefaultValue<T>::Clear();
```

To customize the default action for a particular method, use `ON_CALL()`:
```
ON_CALL(mock_object, method(matchers))
    .With(multi_argument_matcher)  ?
    .WillByDefault(action);
```

### Setting Expectations

`EXPECT_CALL()` sets **expectations** on a mock method (How will it be
called? What will it do?):
```
EXPECT_CALL(mock_object, method(matchers))
    .With(multi_argument_matcher)  ?
    .Times(cardinality)            ?
    .InSequence(sequences)         *
    .After(expectations)           *
    .WillOnce(action)              *
    .WillRepeatedly(action)        ?
    .RetiresOnSaturation();        ?
```

If `Times()` is omitted, the cardinality is assumed to be:

  * `Times(1)` when there is neither `WillOnce()` nor `WillRepeatedly()`;
  * `Times(n)` when there are `n WillOnce()`s but no `WillRepeatedly()`, where `n` >= 1; or
  * `Times(AtLeast(n))` when there are `n WillOnce()`s and a `WillRepeatedly()`, where `n` >= 0.

A method with no `EXPECT_CALL()` is free to be invoked _any number of times_, and the default action will be taken each time.

### Matchers

A **matcher** matches a _single_ argument.  You can use it inside
`ON_CALL()` or `EXPECT_CALL()`, or use it to validate a value
directly:

| `EXPECT_THAT(value, matcher)` | Asserts that `value` matches `matcher`. |
|:------------------------------|:----------------------------------------|
| `ASSERT_THAT(value, matcher)` | The same as `EXPECT_THAT(value, matcher)`, except that it generates a **fatal** failure. |

Built-in matchers (where `argument` is the function argument) are
divided into several categories:

#### Wildcard
|`_`|`argument` can be any value of the correct type.|
|:--|:-----------------------------------------------|
|`A<type>()` or `An<type>()`|`argument` can be any value of type `type`.     |

#### Generic Comparison

|`Eq(value)` or `value`|`argument == value`|
|:---------------------|:------------------|
|`Ge(value)`           |`argument >= value`|
|`Gt(value)`           |`argument > value` |
|`Le(value)`           |`argument <= value`|
|`Lt(value)`           |`argument < value` |
|`Ne(value)`           |`argument != value`|
|`IsNull()`            |`argument` is a `NULL` pointer (raw or smart).|
|`NotNull()`           |`argument` is a non-null pointer (raw or smart).|
|`Ref(variable)`       |`argument` is a reference to `variable`.|
|`TypedEq<type>(value)`|`argument` has type `type` and is equal to `value`. You may need to use this instead of `Eq(value)` when the mock function is overloaded.|

Except `Ref()`, these matchers make a _copy_ of `value` in case it's
modified or destructed later. If the compiler complains that `value`
doesn't have a public copy constructor, try wrap it in `ByRef()`,
e.g. `Eq(ByRef(non_copyable_value))`. If you do that, make sure
`non_copyable_value` is not changed afterwards, or the meaning of your
matcher will be changed.

#### Floating-Point Matchers

|`DoubleEq(a_double)`|`argument` is a `double` value approximately equal to `a_double`, treating two NaNs as unequal.|
|:-------------------|:----------------------------------------------------------------------------------------------|
|`FloatEq(a_float)`  |`argument` is a `float` value approximately equal to `a_float`, treating two NaNs as unequal.  |
|`NanSensitiveDoubleEq(a_double)`|`argument` is a `double` value approximately equal to `a_double`, treating two NaNs as equal.  |
|`NanSensitiveFloatEq(a_float)`|`argument` is a `float` value approximately equal to `a_float`, treating two NaNs as equal.    |

The above matchers use ULP-based comparison (the same as used in
[Google Test](../../googletest/)). They
automatically pick a reasonable error bound based on the absolute
value of the expected value.  `DoubleEq()` and `FloatEq()` conform to
the IEEE standard, which requires comparing two NaNs for equality to
return false. The `NanSensitive*` version instead treats two NaNs as
equal, which is often what a user wants.

|`DoubleNear(a_double, max_abs_error)`|`argument` is a `double` value close to `a_double` (absolute error <= `max_abs_error`), treating two NaNs as unequal.|
|:------------------------------------|:--------------------------------------------------------------------------------------------------------------------|
|`FloatNear(a_float, max_abs_error)`  |`argument` is a `float` value close to `a_float` (absolute error <= `max_abs_error`), treating two NaNs as unequal.  |
|`NanSensitiveDoubleNear(a_double, max_abs_error)`|`argument` is a `double` value close to `a_double` (absolute error <= `max_abs_error`), treating two NaNs as equal.  |
|`NanSensitiveFloatNear(a_float, max_abs_error)`|`argument` is a `float` value close to `a_float` (absolute error <= `max_abs_error`), treating two NaNs as equal.    |

#### String Matchers

The `argument` can be either a C string or a C++ string object:

|`ContainsRegex(string)`|`argument` matches the given regular expression.|
|:----------------------|:-----------------------------------------------|
|`EndsWith(suffix)`     |`argument` ends with string `suffix`.           |
|`HasSubstr(string)`    |`argument` contains `string` as a sub-string.   |
|`MatchesRegex(string)` |`argument` matches the given regular expression with the match starting at the first character and ending at the last character.|
|`StartsWith(prefix)`   |`argument` starts with string `prefix`.         |
|`StrCaseEq(string)`    |`argument` is equal to `string`, ignoring case. |
|`StrCaseNe(string)`    |`argument` is not equal to `string`, ignoring case.|
|`StrEq(string)`        |`argument` is equal to `string`.                |
|`StrNe(string)`        |`argument` is not equal to `string`.            |

`ContainsRegex()` and `MatchesRegex()` use the regular expression
syntax defined
[here](../../googletest/docs/AdvancedGuide.md#regular-expression-syntax).
`StrCaseEq()`, `StrCaseNe()`, `StrEq()`, and `StrNe()` work for wide
strings as well.

#### Container Matchers

Most STL-style containers support `==`, so you can use
`Eq(expected_container)` or simply `expected_container` to match a
container exactly.   If you want to write the elements in-line,
match them more flexibly, or get more informative messages, you can use:

| `ContainerEq(container)` | The same as `Eq(container)` except that the failure message also includes which elements are in one container but not the other. |
|:-------------------------|:---------------------------------------------------------------------------------------------------------------------------------|
| `Contains(e)`            | `argument` contains an element that matches `e`, which can be either a value or a matcher.                                       |
| `Each(e)`                | `argument` is a container where _every_ element matches `e`, which can be either a value or a matcher.                           |
| `ElementsAre(e0, e1, ..., en)` | `argument` has `n + 1` elements, where the i-th element matches `ei`, which can be a value or a matcher. 0 to 10 arguments are allowed. |
| `ElementsAreArray({ e0, e1, ..., en })`, `ElementsAreArray(array)`, or `ElementsAreArray(array, count)` | The same as `ElementsAre()` except that the expected element values/matchers come from an initializer list, STL-style container, or C-style array. |
| `IsEmpty()`              | `argument` is an empty container (`container.empty()`).                                                                          |
| `Pointwise(m, container)` | `argument` contains the same number of elements as in `container`, and for all i, (the i-th element in `argument`, the i-th element in `container`) match `m`, which is a matcher on 2-tuples. E.g. `Pointwise(Le(), upper_bounds)` verifies that each element in `argument` doesn't exceed the corresponding element in `upper_bounds`. See more detail below. |
| `SizeIs(m)`              | `argument` is a container whose size matches `m`. E.g. `SizeIs(2)` or `SizeIs(Lt(2))`.                                           |
| `UnorderedElementsAre(e0, e1, ..., en)` | `argument` has `n + 1` elements, and under some permutation each element matches an `ei` (for a different `i`), which can be a value or a matcher. 0 to 10 arguments are allowed. |
| `UnorderedElementsAreArray({ e0, e1, ..., en })`, `UnorderedElementsAreArray(array)`, or `UnorderedElementsAreArray(array, count)` | The same as `UnorderedElementsAre()` except that the expected element values/matchers come from an initializer list, STL-style container, or C-style array. |
| `WhenSorted(m)`          | When `argument` is sorted using the `<` operator, it matches container matcher `m`. E.g. `WhenSorted(UnorderedElementsAre(1, 2, 3))` verifies that `argument` contains elements `1`, `2`, and `3`, ignoring order. |
| `WhenSortedBy(comparator, m)` | The same as `WhenSorted(m)`, except that the given comparator instead of `<` is used to sort `argument`. E.g. `WhenSortedBy(std::greater<int>(), ElementsAre(3, 2, 1))`. |

Notes:

  * These matchers can also match:
    1. a native array passed by reference (e.g. in `Foo(const int (&a)[5])`), and
    1. an array passed as a pointer and a count (e.g. in `Bar(const T* buffer, int len)` -- see [Multi-argument Matchers](#Multiargument_Matchers.md)).
  * The array being matched may be multi-dimensional (i.e. its elements can be arrays).
  * `m` in `Pointwise(m, ...)` should be a matcher for `::testing::tuple<T, U>` where `T` and `U` are the element type of the actual container and the expected container, respectively. For example, to compare two `Foo` containers where `Foo` doesn't support `operator==` but has an `Equals()` method, one might write:

```
using ::testing::get;
MATCHER(FooEq, "") {
  return get<0>(arg).Equals(get<1>(arg));
}
...
EXPECT_THAT(actual_foos, Pointwise(FooEq(), expected_foos));
```

#### Member Matchers

|`Field(&class::field, m)`|`argument.field` (or `argument->field` when `argument` is a plain pointer) matches matcher `m`, where `argument` is an object of type _class_.|
|:------------------------|:---------------------------------------------------------------------------------------------------------------------------------------------|
|`Key(e)`                 |`argument.first` matches `e`, which can be either a value or a matcher. E.g. `Contains(Key(Le(5)))` can verify that a `map` contains a key `<= 5`.|
|`Pair(m1, m2)`           |`argument` is an `std::pair` whose `first` field matches `m1` and `second` field matches `m2`.                                                |
|`Property(&class::property, m)`|`argument.property()` (or `argument->property()` when `argument` is a plain pointer) matches matcher `m`, where `argument` is an object of type _class_.|

#### Matching the Result of a Function or Functor

|`ResultOf(f, m)`|`f(argument)` matches matcher `m`, where `f` is a function or functor.|
|:---------------|:---------------------------------------------------------------------|

#### Pointer Matchers

|`Pointee(m)`|`argument` (either a smart pointer or a raw pointer) points to a value that matches matcher `m`.|
|:-----------|:-----------------------------------------------------------------------------------------------|
|`WhenDynamicCastTo<T>(m)`| when `argument` is passed through `dynamic_cast<T>()`, it matches matcher `m`.                 |

#### Multiargument Matchers

Technically, all matchers match a _single_ value. A "multi-argument"
matcher is just one that matches a _tuple_. The following matchers can
be used to match a tuple `(x, y)`:

|`Eq()`|`x == y`|
|:-----|:-------|
|`Ge()`|`x >= y`|
|`Gt()`|`x > y` |
|`Le()`|`x <= y`|
|`Lt()`|`x < y` |
|`Ne()`|`x != y`|

You can use the following selectors to pick a subset of the arguments
(or reorder them) to participate in the matching:

|`AllArgs(m)`|Equivalent to `m`. Useful as syntactic sugar in `.With(AllArgs(m))`.|
|:-----------|:-------------------------------------------------------------------|
|`Args<N1, N2, ..., Nk>(m)`|The tuple of the `k` selected (using 0-based indices) arguments matches `m`, e.g. `Args<1, 2>(Eq())`.|

#### Composite Matchers

You can make a matcher from one or more other matchers:

|`AllOf(m1, m2, ..., mn)`|`argument` matches all of the matchers `m1` to `mn`.|
|:-----------------------|:---------------------------------------------------|
|`AnyOf(m1, m2, ..., mn)`|`argument` matches at least one of the matchers `m1` to `mn`.|
|`Not(m)`                |`argument` doesn't match matcher `m`.               |

#### Adapters for Matchers

|`MatcherCast<T>(m)`|casts matcher `m` to type `Matcher<T>`.|
|:------------------|:--------------------------------------|
|`SafeMatcherCast<T>(m)`| [safely casts](CookBook.md#casting-matchers) matcher `m` to type `Matcher<T>`. |
|`Truly(predicate)` |`predicate(argument)` returns something considered by C++ to be true, where `predicate` is a function or functor.|

#### Matchers as Predicates

|`Matches(m)(value)`|evaluates to `true` if `value` matches `m`. You can use `Matches(m)` alone as a unary functor.|
|:------------------|:---------------------------------------------------------------------------------------------|
|`ExplainMatchResult(m, value, result_listener)`|evaluates to `true` if `value` matches `m`, explaining the result to `result_listener`.       |
|`Value(value, m)`  |evaluates to `true` if `value` matches `m`.                                                   |

#### Defining Matchers

| `MATCHER(IsEven, "") { return (arg % 2) == 0; }` | Defines a matcher `IsEven()` to match an even number. |
|:-------------------------------------------------|:------------------------------------------------------|
| `MATCHER_P(IsDivisibleBy, n, "") { *result_listener << "where the remainder is " << (arg % n); return (arg % n) == 0; }` | Defines a macher `IsDivisibleBy(n)` to match a number divisible by `n`. |
| `MATCHER_P2(IsBetween, a, b, std::string(negation ? "isn't" : "is") + " between " + PrintToString(a) + " and " + PrintToString(b)) { return a <= arg && arg <= b; }` | Defines a matcher `IsBetween(a, b)` to match a value in the range [`a`, `b`]. |

**Notes:**

  1. The `MATCHER*` macros cannot be used inside a function or class.
  1. The matcher body must be _purely functional_ (i.e. it cannot have any side effect, and the result must not depend on anything other than the value being matched and the matcher parameters).
  1. You can use `PrintToString(x)` to convert a value `x` of any type to a string.

#### Matchers as Test Assertions

|`ASSERT_THAT(expression, m)`|Generates a [fatal failure](../../googletest/docs/Primer.md#assertions) if the value of `expression` doesn't match matcher `m`.|
|:---------------------------|:----------------------------------------------------------------------------------------------------------------------------------------------|
|`EXPECT_THAT(expression, m)`|Generates a non-fatal failure if the value of `expression` doesn't match matcher `m`.                                                          |

### Actions

**Actions** specify what a mock function should do when invoked.

#### Returning a Value

|`Return()`|Return from a `void` mock function.|
|:---------|:----------------------------------|
|`Return(value)`|Return `value`. If the type of `value` is different to the mock function's return type, `value` is converted to the latter type <i>at the time the expectation is set</i>, not when the action is executed.|
|`ReturnArg<N>()`|Return the `N`-th (0-based) argument.|
|`ReturnNew<T>(a1, ..., ak)`|Return `new T(a1, ..., ak)`; a different object is created each time.|
|`ReturnNull()`|Return a null pointer.             |
|`ReturnPointee(ptr)`|Return the value pointed to by `ptr`.|
|`ReturnRef(variable)`|Return a reference to `variable`.  |
|`ReturnRefOfCopy(value)`|Return a reference to a copy of `value`; the copy lives as long as the action.|

#### Side Effects

|`Assign(&variable, value)`|Assign `value` to variable.|
|:-------------------------|:--------------------------|
| `DeleteArg<N>()`         | Delete the `N`-th (0-based) argument, which must be a pointer. |
| `SaveArg<N>(pointer)`    | Save the `N`-th (0-based) argument to `*pointer`. |
| `SaveArgPointee<N>(pointer)` | Save the value pointed to by the `N`-th (0-based) argument to `*pointer`. |
| `SetArgReferee<N>(value)` |	Assign value to the variable referenced by the `N`-th (0-based) argument. |
|`SetArgPointee<N>(value)` |Assign `value` to the variable pointed by the `N`-th (0-based) argument.|
|`SetArgumentPointee<N>(value)`|Same as `SetArgPointee<N>(value)`. Deprecated. Will be removed in v1.7.0.|
|`SetArrayArgument<N>(first, last)`|Copies the elements in source range [`first`, `last`) to the array pointed to by the `N`-th (0-based) argument, which can be either a pointer or an iterator. The action does not take ownership of the elements in the source range.|
|`SetErrnoAndReturn(error, value)`|Set `errno` to `error` and return `value`.|
|`Throw(exception)`        |Throws the given exception, which can be any copyable value. Available since v1.1.0.|

#### Using a Function or a Functor as an Action

|`Invoke(f)`|Invoke `f` with the arguments passed to the mock function, where `f` can be a global/static function or a functor.|
|:----------|:-----------------------------------------------------------------------------------------------------------------|
|`Invoke(object_pointer, &class::method)`|Invoke the {method on the object with the arguments passed to the mock function.                                  |
|`InvokeWithoutArgs(f)`|Invoke `f`, which can be a global/static function or a functor. `f` must take no arguments.                       |
|`InvokeWithoutArgs(object_pointer, &class::method)`|Invoke the method on the object, which takes no arguments.                                                        |
|`InvokeArgument<N>(arg1, arg2, ..., argk)`|Invoke the mock function's `N`-th (0-based) argument, which must be a function or a functor, with the `k` arguments.|

The return value of the invoked function is used as the return value
of the action.

When defining a function or functor to be used with `Invoke*()`, you can declare any unused parameters as `Unused`:
```
  double Distance(Unused, double x, double y) { return sqrt(x*x + y*y); }
  ...
  EXPECT_CALL(mock, Foo("Hi", _, _)).WillOnce(Invoke(Distance));
```

In `InvokeArgument<N>(...)`, if an argument needs to be passed by reference, wrap it inside `ByRef()`. For example,
```
  InvokeArgument<2>(5, string("Hi"), ByRef(foo))
```
calls the mock function's #2 argument, passing to it `5` and `string("Hi")` by value, and `foo` by reference.

#### Default Action

|`DoDefault()`|Do the default action (specified by `ON_CALL()` or the built-in one).|
|:------------|:--------------------------------------------------------------------|

**Note:** due to technical reasons, `DoDefault()` cannot be used inside  a composite action - trying to do so will result in a run-time error.

#### Composite Actions

|`DoAll(a1, a2, ..., an)`|Do all actions `a1` to `an` and return the result of `an` in each invocation. The first `n - 1` sub-actions must return void. |
|:-----------------------|:-----------------------------------------------------------------------------------------------------------------------------|
|`IgnoreResult(a)`       |Perform action `a` and ignore its result. `a` must not return void.                                                           |
|`WithArg<N>(a)`         |Pass the `N`-th (0-based) argument of the mock function to action `a` and perform it.                                         |
|`WithArgs<N1, N2, ..., Nk>(a)`|Pass the selected (0-based) arguments of the mock function to action `a` and perform it.                                      |
|`WithoutArgs(a)`        |Perform action `a` without any arguments.                                                                                     |

#### Defining Actions

| `ACTION(Sum) { return arg0 + arg1; }` | Defines an action `Sum()` to return the sum of the mock function's argument #0 and #1. |
|:--------------------------------------|:---------------------------------------------------------------------------------------|
| `ACTION_P(Plus, n) { return arg0 + n; }` | Defines an action `Plus(n)` to return the sum of the mock function's argument #0 and `n`. |
| `ACTION_Pk(Foo, p1, ..., pk) { statements; }` | Defines a parameterized action `Foo(p1, ..., pk)` to execute the given `statements`.   |

The `ACTION*` macros cannot be used inside a function or class.

### Cardinalities

These are used in `Times()` to specify how many times a mock function will be called:

|`AnyNumber()`|The function can be called any number of times.|
|:------------|:----------------------------------------------|
|`AtLeast(n)` |The call is expected at least `n` times.       |
|`AtMost(n)`  |The call is expected at most `n` times.        |
|`Between(m, n)`|The call is expected between `m` and `n` (inclusive) times.|
|`Exactly(n) or n`|The call is expected exactly `n` times. In particular, the call should never happen when `n` is 0.|

### Expectation Order

By default, the expectations can be matched in _any_ order.  If some
or all expectations must be matched in a given order, there are two
ways to specify it.  They can be used either independently or
together.

#### The After Clause

```
using ::testing::Expectation;
...
Expectation init_x = EXPECT_CALL(foo, InitX());
Expectation init_y = EXPECT_CALL(foo, InitY());
EXPECT_CALL(foo, Bar())
    .After(init_x, init_y);
```
says that `Bar()` can be called only after both `InitX()` and
`InitY()` have been called.

If you don't know how many pre-requisites an expectation has when you
write it, you can use an `ExpectationSet` to collect them:

```
using ::testing::ExpectationSet;
...
ExpectationSet all_inits;
for (int i = 0; i < element_count; i++) {
  all_inits += EXPECT_CALL(foo, InitElement(i));
}
EXPECT_CALL(foo, Bar())
    .After(all_inits);
```
says that `Bar()` can be called only after all elements have been
initialized (but we don't care about which elements get initialized
before the others).

Modifying an `ExpectationSet` after using it in an `.After()` doesn't
affect the meaning of the `.After()`.

#### Sequences

When you have a long chain of sequential expectations, it's easier to
specify the order using **sequences**, which don't require you to given
each expectation in the chain a different name.  <i>All expected<br>
calls</i> in the same sequence must occur in the order they are
specified.

```
using ::testing::Sequence;
Sequence s1, s2;
...
EXPECT_CALL(foo, Reset())
    .InSequence(s1, s2)
    .WillOnce(Return(true));
EXPECT_CALL(foo, GetSize())
    .InSequence(s1)
    .WillOnce(Return(1));
EXPECT_CALL(foo, Describe(A<const char*>()))
    .InSequence(s2)
    .WillOnce(Return("dummy"));
```
says that `Reset()` must be called before _both_ `GetSize()` _and_
`Describe()`, and the latter two can occur in any order.

To put many expectations in a sequence conveniently:
```
using ::testing::InSequence;
{
  InSequence dummy;

  EXPECT_CALL(...)...;
  EXPECT_CALL(...)...;
  ...
  EXPECT_CALL(...)...;
}
```
says that all expected calls in the scope of `dummy` must occur in
strict order. The name `dummy` is irrelevant.)

### Verifying and Resetting a Mock

Google Mock will verify the expectations on a mock object when it is destructed, or you can do it earlier:
```
using ::testing::Mock;
...
// Verifies and removes the expectations on mock_obj;
// returns true iff successful.
Mock::VerifyAndClearExpectations(&mock_obj);
...
// Verifies and removes the expectations on mock_obj;
// also removes the default actions set by ON_CALL();
// returns true iff successful.
Mock::VerifyAndClear(&mock_obj);
```

You can also tell Google Mock that a mock object can be leaked and doesn't
need to be verified:
```
Mock::AllowLeak(&mock_obj);
```

### Mock Classes

Google Mock defines a convenient mock class template

```
class MockFunction<R(A1, ..., An)> {
 public:
  MOCK_METHODn(Call, R(A1, ..., An));
};
```
See this [recipe](CookBook.md#using-check-points) for one application of it.

### Flags

| `--gmock_catch_leaked_mocks=0` | Don't report leaked mock objects as failures. |
|:-------------------------------|:----------------------------------------------|
| `--gmock_verbose=LEVEL`        | Sets the default verbosity level (`info`, `warning`, or `error`) of Google Mock messages. |

---

## Examples

~~~ {#sample1h .cpp}
#ifndef GTEST_SAMPLES_SAMPLE1_H_
#define GTEST_SAMPLES_SAMPLE1_H_

// Returns n! (the factorial of n).  For negative n, n! is defined to be 1.
int Factorial(int n);

// Returns true iff n is a prime number.
bool IsPrime(int n);

#endif  // GTEST_SAMPLES_SAMPLE1_H_
~~~

~~~ {#sample1cpp .cpp}
// A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)


// This sample shows how to write a simple unit test for a function,
// using Google C++ testing framework.
//
// Writing a unit test using Google C++ testing framework is easy as 1-2-3:


// Step 1. Include necessary header files such that the stuff your
// test logic needs is declared.
//
// Don't forget gtest.h, which declares the testing framework.

#include <limits.h>
#include "sample1.h"
#include "gtest/gtest.h"


// Step 2. Use the TEST macro to define your tests.
//
// TEST has two parameters: the test case name and the test name.
// After using the macro, you should define your test logic between a
// pair of braces.  You can use a bunch of macros to indicate the
// success or failure of a test.  EXPECT_TRUE and EXPECT_EQ are
// examples of such macros.  For a complete list, see gtest.h.
//
// <TechnicalDetails>
//
// In Google Test, tests are grouped into test cases.  This is how we
// keep test code organized.  You should put logically related tests
// into the same test case.
//
// The test case name and the test name should both be valid C++
// identifiers.  And you should not use underscore (_) in the names.
//
// Google Test guarantees that each test you define is run exactly
// once, but it makes no guarantee on the order the tests are
// executed.  Therefore, you should write your tests in such a way
// that their results don't depend on their order.
//
// </TechnicalDetails>


// Tests Factorial().

// Tests factorial of negative numbers.
TEST(FactorialTest, Negative) {
  // This test is named "Negative", and belongs to the "FactorialTest"
  // test case.
  EXPECT_EQ(1, Factorial(-5));
  EXPECT_EQ(1, Factorial(-1));
  EXPECT_GT(Factorial(-10), 0);

  // <TechnicalDetails>
  //
  // EXPECT_EQ(expected, actual) is the same as
  //
  //   EXPECT_TRUE((expected) == (actual))
  //
  // except that it will print both the expected value and the actual
  // value when the assertion fails.  This is very helpful for
  // debugging.  Therefore in this case EXPECT_EQ is preferred.
  //
  // On the other hand, EXPECT_TRUE accepts any Boolean expression,
  // and is thus more general.
  //
  // </TechnicalDetails>
}

// Tests factorial of 0.
TEST(FactorialTest, Zero) {
  EXPECT_EQ(1, Factorial(0));
}

// Tests factorial of positive numbers.
TEST(FactorialTest, Positive) {
  EXPECT_EQ(1, Factorial(1));
  EXPECT_EQ(2, Factorial(2));
  EXPECT_EQ(6, Factorial(3));
  EXPECT_EQ(40320, Factorial(8));
}


// Tests IsPrime()

// Tests negative input.
TEST(IsPrimeTest, Negative) {
  // This test belongs to the IsPrimeTest test case.

  EXPECT_FALSE(IsPrime(-1));
  EXPECT_FALSE(IsPrime(-2));
  EXPECT_FALSE(IsPrime(INT_MIN));
}

// Tests some trivial cases.
TEST(IsPrimeTest, Trivial) {
  EXPECT_FALSE(IsPrime(0));
  EXPECT_FALSE(IsPrime(1));
  EXPECT_TRUE(IsPrime(2));
  EXPECT_TRUE(IsPrime(3));
}

// Tests positive input.
TEST(IsPrimeTest, Positive) {
  EXPECT_FALSE(IsPrime(4));
  EXPECT_TRUE(IsPrime(5));
  EXPECT_FALSE(IsPrime(6));
  EXPECT_TRUE(IsPrime(23));
}

// Step 3. Call RUN_ALL_TESTS() in main().
//
// We do this by linking in src/gtest_main.cc file, which consists of
// a main() function which calls RUN_ALL_TESTS() for us.
//
// This runs all the tests you've defined, prints the result, and
// returns 0 if successful, or 1 otherwise.
//
// Did you notice that we didn't register the tests?  The
// RUN_ALL_TESTS() macro magically knows about all the tests we
// defined.  Isn't this convenient?
~~~

~~~ {#sample2h .cpp}
#ifndef GTEST_SAMPLES_SAMPLE2_H_
#define GTEST_SAMPLES_SAMPLE2_H_

#include <string.h>


// A simple string class.
class MyString {
 private:
  const char* c_string_;
  const MyString& operator=(const MyString& rhs);

 public:
  // Clones a 0-terminated C string, allocating memory using new.
  static const char* CloneCString(const char* a_c_string);

  ////////////////////////////////////////////////////////////
  //
  // C'tors

  // The default c'tor constructs a NULL string.
  MyString() : c_string_(NULL) {}

  // Constructs a MyString by cloning a 0-terminated C string.
  explicit MyString(const char* a_c_string) : c_string_(NULL) {
    Set(a_c_string);
  }

  // Copy c'tor
  MyString(const MyString& string) : c_string_(NULL) {
    Set(string.c_string_);
  }

  ////////////////////////////////////////////////////////////
  //
  // D'tor.  MyString is intended to be a final class, so the d'tor
  // doesn't need to be virtual.
  ~MyString() { delete[] c_string_; }

  // Gets the 0-terminated C string this MyString object represents.
  const char* c_string() const { return c_string_; }

  size_t Length() const {
    return c_string_ == NULL ? 0 : strlen(c_string_);
  }

  // Sets the 0-terminated C string this MyString object represents.
  void Set(const char* c_string);
};


#endif  // GTEST_SAMPLES_SAMPLE2_H_
~~~

~~~ {#sample2cpp .cpp}
#include "sample2.h"

#include <string.h>

// Clones a 0-terminated C string, allocating memory using new.
const char* MyString::CloneCString(const char* a_c_string) {
  if (a_c_string == NULL) return NULL;

  const size_t len = strlen(a_c_string);
  char* const clone = new char[ len + 1 ];
  memcpy(clone, a_c_string, len + 1);

  return clone;
}

// Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}
~~~

~~~ {#sample2test .cpp}
#include "sample2.h"
#include "gtest/gtest.h"

// In this example, we test the MyString class (a simple string).

// Tests the default c'tor.
TEST(MyString, DefaultConstructor) {
  const MyString s;

  // Asserts that s.c_string() returns NULL.
  //
  // <TechnicalDetails>
  //
  // If we write NULL instead of
  //
  //   static_cast<const char *>(NULL)
  //
  // in this assertion, it will generate a warning on gcc 3.4.  The
  // reason is that EXPECT_EQ needs to know the types of its
  // arguments in order to print them when it fails.  Since NULL is
  // #defined as 0, the compiler will use the formatter function for
  // int to print it.  However, gcc thinks that NULL should be used as
  // a pointer, not an int, and therefore complains.
  //
  // The root of the problem is C++'s lack of distinction between the
  // integer number 0 and the null pointer constant.  Unfortunately,
  // we have to live with this fact.
  //
  // </TechnicalDetails>
  EXPECT_STREQ(NULL, s.c_string());

  EXPECT_EQ(0u, s.Length());
}

const char kHelloString[] = "Hello, world!";

// Tests the c'tor that accepts a C string.
TEST(MyString, ConstructorFromCString) {
  const MyString s(kHelloString);
  EXPECT_EQ(0, strcmp(s.c_string(), kHelloString));
  EXPECT_EQ(sizeof(kHelloString)/sizeof(kHelloString[0]) - 1,
            s.Length());
}

// Tests the copy c'tor.
TEST(MyString, CopyConstructor) {
  const MyString s1(kHelloString);
  const MyString s2 = s1;
  EXPECT_EQ(0, strcmp(s2.c_string(), kHelloString));
}

// Tests the Set method.
TEST(MyString, Set) {
  MyString s;

  s.Set(kHelloString);
  EXPECT_EQ(0, strcmp(s.c_string(), kHelloString));

  // Set should work when the input pointer is the same as the one
  // already in the MyString object.
  s.Set(s.c_string());
  EXPECT_EQ(0, strcmp(s.c_string(), kHelloString));

  // Can we set the MyString to NULL?
  s.Set(NULL);
  EXPECT_STREQ(NULL, s.c_string());
}
~~~

~~~ {#sample3h .cpp}
#ifndef GTEST_SAMPLES_SAMPLE3_INL_H_
#define GTEST_SAMPLES_SAMPLE3_INL_H_

#include <stddef.h>


// Queue is a simple queue implemented as a singled-linked list.
//
// The element type must support copy constructor.
template <typename E>  // E is the element type
class Queue;

// QueueNode is a node in a Queue, which consists of an element of
// type E and a pointer to the next node.
template <typename E>  // E is the element type
class QueueNode {
  friend class Queue<E>;

 public:
  // Gets the element in this node.
  const E& element() const { return element_; }

  // Gets the next node in the queue.
  QueueNode* next() { return next_; }
  const QueueNode* next() const { return next_; }

 private:
  // Creates a node with a given element value.  The next pointer is
  // set to NULL.
  explicit QueueNode(const E& an_element) : element_(an_element), next_(NULL) {}

  // We disable the default assignment operator and copy c'tor.
  const QueueNode& operator = (const QueueNode&);
  QueueNode(const QueueNode&);

  E element_;
  QueueNode* next_;
};

template <typename E>  // E is the element type.
class Queue {
 public:
  // Creates an empty queue.
  Queue() : head_(NULL), last_(NULL), size_(0) {}

  // D'tor.  Clears the queue.
  ~Queue() { Clear(); }

  // Clears the queue.
  void Clear() {
    if (size_ > 0) {
      // 1. Deletes every node.
      QueueNode<E>* node = head_;
      QueueNode<E>* next = node->next();
      for (; ;) {
        delete node;
        node = next;
        if (node == NULL) break;
        next = node->next();
      }

      // 2. Resets the member variables.
      head_ = last_ = NULL;
      size_ = 0;
    }
  }

  // Gets the number of elements.
  size_t Size() const { return size_; }

  // Gets the first element of the queue, or NULL if the queue is empty.
  QueueNode<E>* Head() { return head_; }
  const QueueNode<E>* Head() const { return head_; }

  // Gets the last element of the queue, or NULL if the queue is empty.
  QueueNode<E>* Last() { return last_; }
  const QueueNode<E>* Last() const { return last_; }

  // Adds an element to the end of the queue.  A copy of the element is
  // created using the copy constructor, and then stored in the queue.
  // Changes made to the element in the queue doesn't affect the source
  // object, and vice versa.
  void Enqueue(const E& element) {
    QueueNode<E>* new_node = new QueueNode<E>(element);

    if (size_ == 0) {
      head_ = last_ = new_node;
      size_ = 1;
    } else {
      last_->next_ = new_node;
      last_ = new_node;
      size_++;
    }
  }

  // Removes the head of the queue and returns it.  Returns NULL if
  // the queue is empty.
  E* Dequeue() {
    if (size_ == 0) {
      return NULL;
    }

    const QueueNode<E>* const old_head = head_;
    head_ = head_->next_;
    size_--;
    if (size_ == 0) {
      last_ = NULL;
    }

    E* element = new E(old_head->element());
    delete old_head;

    return element;
  }

  // Applies a function/functor on each element of the queue, and
  // returns the result in a new queue.  The original queue is not
  // affected.
  template <typename F>
  Queue* Map(F function) const {
    Queue* new_queue = new Queue();
    for (const QueueNode<E>* node = head_; node != NULL; node = node->next_) {
      new_queue->Enqueue(function(node->element()));
    }

    return new_queue;
  }

 private:
  QueueNode<E>* head_;  // The first node of the queue.
  QueueNode<E>* last_;  // The last node of the queue.
  size_t size_;  // The number of elements in the queue.

  // We disallow copying a queue.
  Queue(const Queue&);
  const Queue& operator = (const Queue&);
};

#endif  // GTEST_SAMPLES_SAMPLE3_INL_H_
~~~

~~~ {#sample4h .cpp}
#ifndef GTEST_SAMPLES_SAMPLE4_H_
#define GTEST_SAMPLES_SAMPLE4_H_

// A simple monotonic counter.
class Counter {
 private:
  int counter_;

 public:
  // Creates a counter that starts at 0.
  Counter() : counter_(0) {}

  // Returns the current counter value, and increments it.
  int Increment();

  // Prints the current counter value to STDOUT.
  void Print() const;
};

#endif  // GTEST_SAMPLES_SAMPLE4_H_
~~~

~~~ {#sample4cpp .cpp}
#include <stdio.h>

#include "sample4.h"

// Returns the current counter value, and increments it.
int Counter::Increment() {
  return counter_++;
}

// Prints the current counter value to STDOUT.
void Counter::Print() const {
  printf("%d", counter_);
}
~~~

~~~ {#sample4test .cpp}
#include "gtest/gtest.h"
#include "sample4.h"

// Tests the Increment() method.
TEST(Counter, Increment) {
  Counter c;

  // EXPECT_EQ() evaluates its arguments exactly once, so they
  // can have side effects.

  EXPECT_EQ(0, c.Increment());
  EXPECT_EQ(1, c.Increment());
  EXPECT_EQ(2, c.Increment());
}
~~~

~~~ {#sample5test .cpp}
#include <limits.h>
#include <time.h>
#include "sample3-inl.h"
#include "gtest/gtest.h"
#include "sample1.h"

// In this sample, we want to ensure that every test finishes within
// ~5 seconds.  If a test takes longer to run, we consider it a
// failure.
//
// We put the code for timing a test in a test fixture called
// "QuickTest".  QuickTest is intended to be the super fixture that
// other fixtures derive from, therefore there is no test case with
// the name "QuickTest".  This is OK.
//
// Later, we will derive multiple test fixtures from QuickTest.
class QuickTest : public testing::Test {
 protected:
  // Remember that SetUp() is run immediately before a test starts.
  // This is a good place to record the start time.
  virtual void SetUp() {
    start_time_ = time(NULL);
  }

  // TearDown() is invoked immediately after a test finishes.  Here we
  // check if the test was too slow.
  virtual void TearDown() {
    // Gets the time when the test finishes
    const time_t end_time = time(NULL);

    // Asserts that the test took no more than ~5 seconds.  Did you
    // know that you can use assertions in SetUp() and TearDown() as
    // well?
    EXPECT_TRUE(end_time - start_time_ <= 5) << "The test took too long.";
  }

  // The UTC time (in seconds) when the test starts
  time_t start_time_;
};


// We derive a fixture named IntegerFunctionTest from the QuickTest
// fixture.  All tests using this fixture will be automatically
// required to be quick.
class IntegerFunctionTest : public QuickTest {
  // We don't need any more logic than already in the QuickTest fixture.
  // Therefore the body is empty.
};


// Now we can write tests in the IntegerFunctionTest test case.

// Tests Factorial()
TEST_F(IntegerFunctionTest, Factorial) {
  // Tests factorial of negative numbers.
  EXPECT_EQ(1, Factorial(-5));
  EXPECT_EQ(1, Factorial(-1));
  EXPECT_GT(Factorial(-10), 0);

  // Tests factorial of 0.
  EXPECT_EQ(1, Factorial(0));

  // Tests factorial of positive numbers.
  EXPECT_EQ(1, Factorial(1));
  EXPECT_EQ(2, Factorial(2));
  EXPECT_EQ(6, Factorial(3));
  EXPECT_EQ(40320, Factorial(8));
}


// Tests IsPrime()
TEST_F(IntegerFunctionTest, IsPrime) {
  // Tests negative input.
  EXPECT_FALSE(IsPrime(-1));
  EXPECT_FALSE(IsPrime(-2));
  EXPECT_FALSE(IsPrime(INT_MIN));

  // Tests some trivial cases.
  EXPECT_FALSE(IsPrime(0));
  EXPECT_FALSE(IsPrime(1));
  EXPECT_TRUE(IsPrime(2));
  EXPECT_TRUE(IsPrime(3));

  // Tests positive input.
  EXPECT_FALSE(IsPrime(4));
  EXPECT_TRUE(IsPrime(5));
  EXPECT_FALSE(IsPrime(6));
  EXPECT_TRUE(IsPrime(23));
}


// The next test case (named "QueueTest") also needs to be quick, so
// we derive another fixture from QuickTest.
//
// The QueueTest test fixture has some logic and shared objects in
// addition to what's in QuickTest already.  We define the additional
// stuff inside the body of the test fixture, as usual.
class QueueTest : public QuickTest {
 protected:
  virtual void SetUp() {
    // First, we need to set up the super fixture (QuickTest).
    QuickTest::SetUp();

    // Second, some additional setup for this fixture.
    q1_.Enqueue(1);
    q2_.Enqueue(2);
    q2_.Enqueue(3);
  }

  // By default, TearDown() inherits the behavior of
  // QuickTest::TearDown().  As we have no additional cleaning work
  // for QueueTest, we omit it here.
  //
  // virtual void TearDown() {
  //   QuickTest::TearDown();
  // }

  Queue<int> q0_;
  Queue<int> q1_;
  Queue<int> q2_;
};


// Now, let's write tests using the QueueTest fixture.

// Tests the default constructor.
TEST_F(QueueTest, DefaultConstructor) {
  EXPECT_EQ(0u, q0_.Size());
}

// Tests Dequeue().
TEST_F(QueueTest, Dequeue) {
  int* n = q0_.Dequeue();
  EXPECT_TRUE(n == NULL);

  n = q1_.Dequeue();
  EXPECT_TRUE(n != NULL);
  EXPECT_EQ(1, *n);
  EXPECT_EQ(0u, q1_.Size());
  delete n;

  n = q2_.Dequeue();
  EXPECT_TRUE(n != NULL);
  EXPECT_EQ(2, *n);
  EXPECT_EQ(1u, q2_.Size());
  delete n;
}

// If necessary, you can derive further test fixtures from a derived
// fixture itself.  For example, you can derive another fixture from
// QueueTest.  Google Test imposes no limit on how deep the hierarchy
// can be.  In practice, however, you probably don't want it to be too
// deep as to be confusing.
~~~

~~~ {#sample6test .cpp}
// This sample shows how to test common properties of multiple
// implementations of the same interface (aka interface tests).

// The interface and its implementations are in this header.
#include "prime_tables.h"

#include "gtest/gtest.h"

// First, we define some factory functions for creating instances of
// the implementations.  You may be able to skip this step if all your
// implementations can be constructed the same way.

template <class T>
PrimeTable* CreatePrimeTable();

template <>
PrimeTable* CreatePrimeTable<OnTheFlyPrimeTable>() {
  return new OnTheFlyPrimeTable;
}

template <>
PrimeTable* CreatePrimeTable<PreCalculatedPrimeTable>() {
  return new PreCalculatedPrimeTable(10000);
}

// Then we define a test fixture class template.
template <class T>
class PrimeTableTest : public testing::Test {
 protected:
  // The ctor calls the factory function to create a prime table
  // implemented by T.
  PrimeTableTest() : table_(CreatePrimeTable<T>()) {}

  virtual ~PrimeTableTest() { delete table_; }

  // Note that we test an implementation via the base interface
  // instead of the actual implementation class.  This is important
  // for keeping the tests close to the real world scenario, where the
  // implementation is invoked via the base interface.  It avoids
  // got-yas where the implementation class has a method that shadows
  // a method with the same name (but slightly different argument
  // types) in the base interface, for example.
  PrimeTable* const table_;
};

#if GTEST_HAS_TYPED_TEST

using testing::Types;

// Google Test offers two ways for reusing tests for different types.
// The first is called "typed tests".  You should use it if you
// already know *all* the types you are gonna exercise when you write
// the tests.

// To write a typed test case, first use
//
//   TYPED_TEST_CASE(TestCaseName, TypeList);
//
// to declare it and specify the type parameters.  As with TEST_F,
// TestCaseName must match the test fixture name.

// The list of types we want to test.
typedef Types<OnTheFlyPrimeTable, PreCalculatedPrimeTable> Implementations;

TYPED_TEST_CASE(PrimeTableTest, Implementations);

// Then use TYPED_TEST(TestCaseName, TestName) to define a typed test,
// similar to TEST_F.
TYPED_TEST(PrimeTableTest, ReturnsFalseForNonPrimes) {
  // Inside the test body, you can refer to the type parameter by
  // TypeParam, and refer to the fixture class by TestFixture.  We
  // don't need them in this example.

  // Since we are in the template world, C++ requires explicitly
  // writing 'this->' when referring to members of the fixture class.
  // This is something you have to learn to live with.
  EXPECT_FALSE(this->table_->IsPrime(-5));
  EXPECT_FALSE(this->table_->IsPrime(0));
  EXPECT_FALSE(this->table_->IsPrime(1));
  EXPECT_FALSE(this->table_->IsPrime(4));
  EXPECT_FALSE(this->table_->IsPrime(6));
  EXPECT_FALSE(this->table_->IsPrime(100));
}

TYPED_TEST(PrimeTableTest, ReturnsTrueForPrimes) {
  EXPECT_TRUE(this->table_->IsPrime(2));
  EXPECT_TRUE(this->table_->IsPrime(3));
  EXPECT_TRUE(this->table_->IsPrime(5));
  EXPECT_TRUE(this->table_->IsPrime(7));
  EXPECT_TRUE(this->table_->IsPrime(11));
  EXPECT_TRUE(this->table_->IsPrime(131));
}

TYPED_TEST(PrimeTableTest, CanGetNextPrime) {
  EXPECT_EQ(2, this->table_->GetNextPrime(0));
  EXPECT_EQ(3, this->table_->GetNextPrime(2));
  EXPECT_EQ(5, this->table_->GetNextPrime(3));
  EXPECT_EQ(7, this->table_->GetNextPrime(5));
  EXPECT_EQ(11, this->table_->GetNextPrime(7));
  EXPECT_EQ(131, this->table_->GetNextPrime(128));
}

// That's it!  Google Test will repeat each TYPED_TEST for each type
// in the type list specified in TYPED_TEST_CASE.  Sit back and be
// happy that you don't have to define them multiple times.

#endif  // GTEST_HAS_TYPED_TEST

#if GTEST_HAS_TYPED_TEST_P

using testing::Types;

// Sometimes, however, you don't yet know all the types that you want
// to test when you write the tests.  For example, if you are the
// author of an interface and expect other people to implement it, you
// might want to write a set of tests to make sure each implementation
// conforms to some basic requirements, but you don't know what
// implementations will be written in the future.
//
// How can you write the tests without committing to the type
// parameters?  That's what "type-parameterized tests" can do for you.
// It is a bit more involved than typed tests, but in return you get a
// test pattern that can be reused in many contexts, which is a big
// win.  Here's how you do it:

// First, define a test fixture class template.  Here we just reuse
// the PrimeTableTest fixture defined earlier:

template <class T>
class PrimeTableTest2 : public PrimeTableTest<T> {
};

// Then, declare the test case.  The argument is the name of the test
// fixture, and also the name of the test case (as usual).  The _P
// suffix is for "parameterized" or "pattern".
TYPED_TEST_CASE_P(PrimeTableTest2);

// Next, use TYPED_TEST_P(TestCaseName, TestName) to define a test,
// similar to what you do with TEST_F.
TYPED_TEST_P(PrimeTableTest2, ReturnsFalseForNonPrimes) {
  EXPECT_FALSE(this->table_->IsPrime(-5));
  EXPECT_FALSE(this->table_->IsPrime(0));
  EXPECT_FALSE(this->table_->IsPrime(1));
  EXPECT_FALSE(this->table_->IsPrime(4));
  EXPECT_FALSE(this->table_->IsPrime(6));
  EXPECT_FALSE(this->table_->IsPrime(100));
}

TYPED_TEST_P(PrimeTableTest2, ReturnsTrueForPrimes) {
  EXPECT_TRUE(this->table_->IsPrime(2));
  EXPECT_TRUE(this->table_->IsPrime(3));
  EXPECT_TRUE(this->table_->IsPrime(5));
  EXPECT_TRUE(this->table_->IsPrime(7));
  EXPECT_TRUE(this->table_->IsPrime(11));
  EXPECT_TRUE(this->table_->IsPrime(131));
}

TYPED_TEST_P(PrimeTableTest2, CanGetNextPrime) {
  EXPECT_EQ(2, this->table_->GetNextPrime(0));
  EXPECT_EQ(3, this->table_->GetNextPrime(2));
  EXPECT_EQ(5, this->table_->GetNextPrime(3));
  EXPECT_EQ(7, this->table_->GetNextPrime(5));
  EXPECT_EQ(11, this->table_->GetNextPrime(7));
  EXPECT_EQ(131, this->table_->GetNextPrime(128));
}

// Type-parameterized tests involve one extra step: you have to
// enumerate the tests you defined:
REGISTER_TYPED_TEST_CASE_P(
    PrimeTableTest2,  // The first argument is the test case name.
    // The rest of the arguments are the test names.
    ReturnsFalseForNonPrimes, ReturnsTrueForPrimes, CanGetNextPrime);

// At this point the test pattern is done.  However, you don't have
// any real test yet as you haven't said which types you want to run
// the tests with.

// To turn the abstract test pattern into real tests, you instantiate
// it with a list of types.  Usually the test pattern will be defined
// in a .h file, and anyone can #include and instantiate it.  You can
// even instantiate it more than once in the same program.  To tell
// different instances apart, you give each of them a name, which will
// become part of the test case name and can be used in test filters.

// The list of types we want to test.  Note that it doesn't have to be
// defined at the time we write the TYPED_TEST_P()s.
typedef Types<OnTheFlyPrimeTable, PreCalculatedPrimeTable>
    PrimeTableImplementations;
INSTANTIATE_TYPED_TEST_CASE_P(OnTheFlyAndPreCalculated,    // Instance name
                              PrimeTableTest2,             // Test case name
                              PrimeTableImplementations);  // Type list

#endif  // GTEST_HAS_TYPED_TEST_P
~~~

~~~ {#sample7test .cpp}
// This sample shows how to test common properties of multiple
// implementations of an interface (aka interface tests) using
// value-parameterized tests. Each test in the test case has
// a parameter that is an interface pointer to an implementation
// tested.

// The interface and its implementations are in this header.
#include "prime_tables.h"

#include "gtest/gtest.h"

#if GTEST_HAS_PARAM_TEST

using ::testing::TestWithParam;
using ::testing::Values;

// As a general rule, to prevent a test from affecting the tests that come
// after it, you should create and destroy the tested objects for each test
// instead of reusing them.  In this sample we will define a simple factory
// function for PrimeTable objects.  We will instantiate objects in test's
// SetUp() method and delete them in TearDown() method.
typedef PrimeTable* CreatePrimeTableFunc();

PrimeTable* CreateOnTheFlyPrimeTable() {
  return new OnTheFlyPrimeTable();
}

template <size_t max_precalculated>
PrimeTable* CreatePreCalculatedPrimeTable() {
  return new PreCalculatedPrimeTable(max_precalculated);
}

// Inside the test body, fixture constructor, SetUp(), and TearDown() you
// can refer to the test parameter by GetParam().  In this case, the test
// parameter is a factory function which we call in fixture's SetUp() to
// create and store an instance of PrimeTable.
class PrimeTableTest : public TestWithParam<CreatePrimeTableFunc*> {
 public:
  virtual ~PrimeTableTest() { delete table_; }
  virtual void SetUp() { table_ = (*GetParam())(); }
  virtual void TearDown() {
    delete table_;
    table_ = NULL;
  }

 protected:
  PrimeTable* table_;
};

TEST_P(PrimeTableTest, ReturnsFalseForNonPrimes) {
  EXPECT_FALSE(table_->IsPrime(-5));
  EXPECT_FALSE(table_->IsPrime(0));
  EXPECT_FALSE(table_->IsPrime(1));
  EXPECT_FALSE(table_->IsPrime(4));
  EXPECT_FALSE(table_->IsPrime(6));
  EXPECT_FALSE(table_->IsPrime(100));
}

TEST_P(PrimeTableTest, ReturnsTrueForPrimes) {
  EXPECT_TRUE(table_->IsPrime(2));
  EXPECT_TRUE(table_->IsPrime(3));
  EXPECT_TRUE(table_->IsPrime(5));
  EXPECT_TRUE(table_->IsPrime(7));
  EXPECT_TRUE(table_->IsPrime(11));
  EXPECT_TRUE(table_->IsPrime(131));
}

TEST_P(PrimeTableTest, CanGetNextPrime) {
  EXPECT_EQ(2, table_->GetNextPrime(0));
  EXPECT_EQ(3, table_->GetNextPrime(2));
  EXPECT_EQ(5, table_->GetNextPrime(3));
  EXPECT_EQ(7, table_->GetNextPrime(5));
  EXPECT_EQ(11, table_->GetNextPrime(7));
  EXPECT_EQ(131, table_->GetNextPrime(128));
}

// In order to run value-parameterized tests, you need to instantiate them,
// or bind them to a list of values which will be used as test parameters.
// You can instantiate them in a different translation module, or even
// instantiate them several times.
//
// Here, we instantiate our tests with a list of two PrimeTable object
// factory functions:
INSTANTIATE_TEST_CASE_P(
    OnTheFlyAndPreCalculated,
    PrimeTableTest,
    Values(&CreateOnTheFlyPrimeTable, &CreatePreCalculatedPrimeTable<1000>));

#else

// Google Test may not support value-parameterized tests with some
// compilers. If we use conditional compilation to compile out all
// code referring to the gtest_main library, MSVC linker will not link
// that library at all and consequently complain about missing entry
// point defined in that library (fatal error LNK1561: entry point
// must be defined). This dummy test keeps gtest_main linked in.
TEST(DummyTest, ValueParameterizedTestsAreNotSupportedOnThisPlatform) {}

#endif  // GTEST_HAS_PARAM_TEST
~~~

~~~ {#sample8test .cpp}
// This sample shows how to test code relying on some global flag variables.
// Combine() helps with generating all possible combinations of such flags,
// and each test is given one combination as a parameter.

// Use class definitions to test from this header.
#include "prime_tables.h"

#include "gtest/gtest.h"

#if GTEST_HAS_COMBINE

// Suppose we want to introduce a new, improved implementation of PrimeTable
// which combines speed of PrecalcPrimeTable and versatility of
// OnTheFlyPrimeTable (see prime_tables.h). Inside it instantiates both
// PrecalcPrimeTable and OnTheFlyPrimeTable and uses the one that is more
// appropriate under the circumstances. But in low memory conditions, it can be
// told to instantiate without PrecalcPrimeTable instance at all and use only
// OnTheFlyPrimeTable.
class HybridPrimeTable : public PrimeTable {
 public:
  HybridPrimeTable(bool force_on_the_fly, int max_precalculated)
      : on_the_fly_impl_(new OnTheFlyPrimeTable),
        precalc_impl_(force_on_the_fly ? NULL :
                          new PreCalculatedPrimeTable(max_precalculated)),
        max_precalculated_(max_precalculated) {}
  virtual ~HybridPrimeTable() {
    delete on_the_fly_impl_;
    delete precalc_impl_;
  }

  virtual bool IsPrime(int n) const {
    if (precalc_impl_ != NULL && n < max_precalculated_)
      return precalc_impl_->IsPrime(n);
    else
      return on_the_fly_impl_->IsPrime(n);
  }

  virtual int GetNextPrime(int p) const {
    int next_prime = -1;
    if (precalc_impl_ != NULL && p < max_precalculated_)
      next_prime = precalc_impl_->GetNextPrime(p);

    return next_prime != -1 ? next_prime : on_the_fly_impl_->GetNextPrime(p);
  }

 private:
  OnTheFlyPrimeTable* on_the_fly_impl_;
  PreCalculatedPrimeTable* precalc_impl_;
  int max_precalculated_;
};

using ::testing::TestWithParam;
using ::testing::Bool;
using ::testing::Values;
using ::testing::Combine;

// To test all code paths for HybridPrimeTable we must test it with numbers
// both within and outside PreCalculatedPrimeTable's capacity and also with
// PreCalculatedPrimeTable disabled. We do this by defining fixture which will
// accept different combinations of parameters for instantiating a
// HybridPrimeTable instance.
class PrimeTableTest : public TestWithParam< ::testing::tuple<bool, int> > {
 protected:
  virtual void SetUp() {
    // This can be written as
    //
    // bool force_on_the_fly;
    // int max_precalculated;
    // tie(force_on_the_fly, max_precalculated) = GetParam();
    //
    // once the Google C++ Style Guide allows use of ::std::tr1::tie.
    //
    bool force_on_the_fly = ::testing::get<0>(GetParam());
    int max_precalculated = ::testing::get<1>(GetParam());
    table_ = new HybridPrimeTable(force_on_the_fly, max_precalculated);
  }
  virtual void TearDown() {
    delete table_;
    table_ = NULL;
  }
  HybridPrimeTable* table_;
};

TEST_P(PrimeTableTest, ReturnsFalseForNonPrimes) {
  // Inside the test body, you can refer to the test parameter by GetParam().
  // In this case, the test parameter is a PrimeTable interface pointer which
  // we can use directly.
  // Please note that you can also save it in the fixture's SetUp() method
  // or constructor and use saved copy in the tests.

  EXPECT_FALSE(table_->IsPrime(-5));
  EXPECT_FALSE(table_->IsPrime(0));
  EXPECT_FALSE(table_->IsPrime(1));
  EXPECT_FALSE(table_->IsPrime(4));
  EXPECT_FALSE(table_->IsPrime(6));
  EXPECT_FALSE(table_->IsPrime(100));
}

TEST_P(PrimeTableTest, ReturnsTrueForPrimes) {
  EXPECT_TRUE(table_->IsPrime(2));
  EXPECT_TRUE(table_->IsPrime(3));
  EXPECT_TRUE(table_->IsPrime(5));
  EXPECT_TRUE(table_->IsPrime(7));
  EXPECT_TRUE(table_->IsPrime(11));
  EXPECT_TRUE(table_->IsPrime(131));
}

TEST_P(PrimeTableTest, CanGetNextPrime) {
  EXPECT_EQ(2, table_->GetNextPrime(0));
  EXPECT_EQ(3, table_->GetNextPrime(2));
  EXPECT_EQ(5, table_->GetNextPrime(3));
  EXPECT_EQ(7, table_->GetNextPrime(5));
  EXPECT_EQ(11, table_->GetNextPrime(7));
  EXPECT_EQ(131, table_->GetNextPrime(128));
}

// In order to run value-parameterized tests, you need to instantiate them,
// or bind them to a list of values which will be used as test parameters.
// You can instantiate them in a different translation module, or even
// instantiate them several times.
//
// Here, we instantiate our tests with a list of parameters. We must combine
// all variations of the boolean flag suppressing PrecalcPrimeTable and some
// meaningful values for tests. We choose a small value (1), and a value that
// will put some of the tested numbers beyond the capability of the
// PrecalcPrimeTable instance and some inside it (10). Combine will produce all
// possible combinations.
INSTANTIATE_TEST_CASE_P(MeaningfulTestParameters,
                        PrimeTableTest,
                        Combine(Bool(), Values(1, 10)));

#else

// Google Test may not support Combine() with some compilers. If we
// use conditional compilation to compile out all code referring to
// the gtest_main library, MSVC linker will not link that library at
// all and consequently complain about missing entry point defined in
// that library (fatal error LNK1561: entry point must be
// defined). This dummy test keeps gtest_main linked in.
TEST(DummyTest, CombineIsNotSupportedOnThisPlatform) {}

#endif  // GTEST_HAS_COMBINE
~~~

~~~ {#sample9test .cpp}
// This sample shows how to use Google Test listener API to implement
// an alternative console output and how to use the UnitTest reflection API
// to enumerate test cases and tests and to inspect their results.

#include <stdio.h>

#include "gtest/gtest.h"

using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::Test;
using ::testing::TestCase;
using ::testing::TestEventListeners;
using ::testing::TestInfo;
using ::testing::TestPartResult;
using ::testing::UnitTest;

namespace {

// Provides alternative output mode which produces minimal amount of
// information about tests.
class TersePrinter : public EmptyTestEventListener {
 private:
  // Called before any test activity starts.
  virtual void OnTestProgramStart(const UnitTest& /* unit_test */) {}

  // Called after all test activities have ended.
  virtual void OnTestProgramEnd(const UnitTest& unit_test) {
    fprintf(stdout, "TEST %s\n", unit_test.Passed() ? "PASSED" : "FAILED");
    fflush(stdout);
  }

  // Called before a test starts.
  virtual void OnTestStart(const TestInfo& test_info) {
    fprintf(stdout,
            "*** Test %s.%s starting.\n",
            test_info.test_case_name(),
            test_info.name());
    fflush(stdout);
  }

  // Called after a failed assertion or a SUCCEED() invocation.
  virtual void OnTestPartResult(const TestPartResult& test_part_result) {
    fprintf(stdout,
            "%s in %s:%d\n%s\n",
            test_part_result.failed() ? "*** Failure" : "Success",
            test_part_result.file_name(),
            test_part_result.line_number(),
            test_part_result.summary());
    fflush(stdout);
  }

  // Called after a test ends.
  virtual void OnTestEnd(const TestInfo& test_info) {
    fprintf(stdout,
            "*** Test %s.%s ending.\n",
            test_info.test_case_name(),
            test_info.name());
    fflush(stdout);
  }
};  // class TersePrinter

TEST(CustomOutputTest, PrintsMessage) {
  printf("Printing something from the test body...\n");
}

TEST(CustomOutputTest, Succeeds) {
  SUCCEED() << "SUCCEED() has been invoked from here";
}

TEST(CustomOutputTest, Fails) {
  EXPECT_EQ(1, 2)
      << "This test fails in order to demonstrate alternative failure messages";
}

}  // namespace

int main(int argc, char **argv) {
  InitGoogleTest(&argc, argv);

  bool terse_output = false;
  if (argc > 1 && strcmp(argv[1], "--terse_output") == 0 )
    terse_output = true;
  else
    printf("%s\n", "Run this program with --terse_output to change the way "
           "it prints its output.");

  UnitTest& unit_test = *UnitTest::GetInstance();

  // If we are given the --terse_output command line flag, suppresses the
  // standard output and attaches own result printer.
  if (terse_output) {
    TestEventListeners& listeners = unit_test.listeners();

    // Removes the default console output listener from the list so it will
    // not receive events from Google Test and won't print any output. Since
    // this operation transfers ownership of the listener to the caller we
    // have to delete it as well.
    delete listeners.Release(listeners.default_result_printer());

    // Adds the custom output listener to the list. It will now receive
    // events from Google Test and print the alternative output. We don't
    // have to worry about deleting it since Google Test assumes ownership
    // over it after adding it to the list.
    listeners.Append(new TersePrinter);
  }
  int ret_val = RUN_ALL_TESTS();

  // This is an example of using the UnitTest reflection API to inspect test
  // results. Here we discount failures from the tests we expected to fail.
  int unexpectedly_failed_tests = 0;
  for (int i = 0; i < unit_test.total_test_case_count(); ++i) {
    const TestCase& test_case = *unit_test.GetTestCase(i);
    for (int j = 0; j < test_case.total_test_count(); ++j) {
      const TestInfo& test_info = *test_case.GetTestInfo(j);
      // Counts failed tests that were not meant to fail (those without
      // 'Fails' in the name).
      if (test_info.result()->Failed() &&
          strcmp(test_info.name(), "Fails") != 0) {
        unexpectedly_failed_tests++;
      }
    }
  }

  // Test that were meant to fail should not affect the test program outcome.
  if (unexpectedly_failed_tests == 0)
    ret_val = 0;

  return ret_val;
}
~~~

~~~ {#sample10test .cpp}
// This sample shows how to use Google Test listener API to implement
// a primitive leak checker.

#include <stdio.h>
#include <stdlib.h>

#include "gtest/gtest.h"

using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::Test;
using ::testing::TestCase;
using ::testing::TestEventListeners;
using ::testing::TestInfo;
using ::testing::TestPartResult;
using ::testing::UnitTest;

namespace {

// We will track memory used by this class.
class Water {
 public:
  // Normal Water declarations go here.

  // operator new and operator delete help us control water allocation.
  void* operator new(size_t allocation_size) {
    allocated_++;
    return malloc(allocation_size);
  }

  void operator delete(void* block, size_t /* allocation_size */) {
    allocated_--;
    free(block);
  }

  static int allocated() { return allocated_; }

 private:
  static int allocated_;
};

int Water::allocated_ = 0;

// This event listener monitors how many Water objects are created and
// destroyed by each test, and reports a failure if a test leaks some Water
// objects. It does this by comparing the number of live Water objects at
// the beginning of a test and at the end of a test.
class LeakChecker : public EmptyTestEventListener {
 private:
  // Called before a test starts.
  virtual void OnTestStart(const TestInfo& /* test_info */) {
    initially_allocated_ = Water::allocated();
  }

  // Called after a test ends.
  virtual void OnTestEnd(const TestInfo& /* test_info */) {
    int difference = Water::allocated() - initially_allocated_;

    // You can generate a failure in any event handler except
    // OnTestPartResult. Just use an appropriate Google Test assertion to do
    // it.
    EXPECT_LE(difference, 0) << "Leaked " << difference << " unit(s) of Water!";
  }

  int initially_allocated_;
};

TEST(ListenersTest, DoesNotLeak) {
  Water* water = new Water;
  delete water;
}

// This should fail when the --check_for_leaks command line flag is
// specified.
TEST(ListenersTest, LeaksWater) {
  Water* water = new Water;
  EXPECT_TRUE(water != NULL);
}

}  // namespace

int main(int argc, char **argv) {
  InitGoogleTest(&argc, argv);

  bool check_for_leaks = false;
  if (argc > 1 && strcmp(argv[1], "--check_for_leaks") == 0 )
    check_for_leaks = true;
  else
    printf("%s\n", "Run this program with --check_for_leaks to enable "
           "custom leak checking in the tests.");

  // If we are given the --check_for_leaks command line flag, installs the
  // leak checker.
  if (check_for_leaks) {
    TestEventListeners& listeners = UnitTest::GetInstance()->listeners();

    // Adds the leak checker to the end of the test event listener list,
    // after the default text output printer and the default XML report
    // generator.
    //
    // The order is important - it ensures that failures generated in the
    // leak checker's OnTestEnd() method are processed by the text and XML
    // printers *before* their OnTestEnd() methods are called, such that
    // they are attributed to the right test. Remember that a listener
    // receives an OnXyzStart event *after* listeners preceding it in the
    // list received that event, and receives an OnXyzEnd event *before*
    // listeners preceding it.
    //
    // We don't need to worry about deleting the new listener later, as
    // Google Test will do it.
    listeners.Append(new LeakChecker);
  }
  return RUN_ALL_TESTS();
}
~~~
