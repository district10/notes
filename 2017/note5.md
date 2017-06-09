---
title: Working Notes
---

-   [TestDrivenDevelopment](https://martinfowler.com/bliki/TestDrivenDevelopment.html)

    :   Kent Beck

        -   Write a test for the next bit of functionality you want to add.
        -   Write the functional code until the test passes.
        -   Refactor both new and old code to make it well structured.

        TDD

        -   Fail, Pass, Refactor
        -   Ensures quality
        -   keeps code **clear, simple and testable**
        -   more readable, more maintainable

        The book

        -   goal: **Clean code that works**
        -   red & green
        -   **Red/green/refactor—the TDD mantra**
        -   fear
            -   tentative // begin learn concretly
            -   clamming up // communicate
            -   avoid feedback // search out helpful, concrete feedback
            -   Imagine programming as turning a crank to pull a bucket of
                water from a well. When the bucket is small, a free-spinning
                crank is fine. When the bucket is big and full of water, you're
                going to get tired before the bucket is all the way up.
                **You need a ratchet mechanism to enable you to rest between bouts of cranking.**
                The heavier the bucket, the closer the teeth need to be on the ratchet.
            -   method, motive, opportunity
            -   Test-driven development is a set of techniques that any
                software engineer can follow, which encourages simple designs
                and test suites that inspire confidence. If you are a genius,
                you don't need these rules. If you are a dolt, the rules won't
                help. **For the vast majority of us in between**, following these
                two simple rules can lead us to work much more closely to our
                potential.
            -   write test before coding, remove duplication

            Part I: The Money Example -<

            :   Chapter 1. Multi-Currency Money -<

                :   -   todo list
                    -   stub
                    -   failure is progress
                    -   If dependency is the problem, duplication is the symptom.
                    -   be able to take teeny-tiny steps

                Chapter 2. Degenerate Objects -<

                :   -   write test, make it run, make it right
                    -   bogus implementation
                    -   value vs. object

                Chapter 3. Equality for All

                Chapter 4. Privacy

                Chapter 5. Franc-ly Speaking -<

                :   The different phases have different purposes. They call for
                    different styles of solution, different aesthetic
                    viewpoints.  The first three phases need to go by quickly,
                    so we get to a known state with the new functionality. We
                    can commit any number of sins to get there, because speed
                    trumps design, just for that brief moment.

                    have duplication galore.

                    We avoided this trap （虽然很干净，但啥也没有……）in Chapter 5.
                    We actually got a new test case working. But we **sinned（犯错） mightily**
                    in copying and pasting tons of code in order to do it quickly.
                    Now it is time to clean up.

                Chapter 6. Equality for All, Redux

                Chapter 7. Apples and Oranges

                Chapter 8. Makin' Objects

                Chapter 9. Times We're Livin' In

                :   -   现在有了 currency

                Chapter 10. Interesting Times

                Chapter 11. The Root of All Evil

                Chapter 12. Addition, Finally

                :   -   assertEquals(five, sum.augend);
                    -   assertEquals(five, sum.addend);
                    -   Did you know that the first argument to addition is
                        called the augend? I didn't until I was writing this.
                        Geek joy.

                Chapter 13. Make It

                Chapter 14. Change

                Chapter 15. Mixed Currencies

                :   ```java
                    public void testMixedAddition() {
                        Expression fiveBucks= Money.dollar(5);
                        Expression tenFrancs= Money.franc(10);
                        Bank bank= new Bank();
                        bank.addRate("CHF", "USD", 2);
                        Money result= bank.reduce(fiveBucks.plus(tenFrancs), "USD");
                        assertEquals(Money.dollar(10), result);
                    }
                    ```


                Chapter 16. Abstraction, Finally

                :   -   Wrote a test with future readers in mind
                    -   Suggested an experiment comparing TDD with your current
                        programming style
                    -   Once again had changes of declarations ripple through
                        the system, and once again followed the compiler's
                        advice to fix them
                    -   Tried a brief experiment, then discarded it when it
                        didn't work out

                Chapter 17. Money Retrospective (回顾的)

                :   I really didn't expect the metaphor to be so powerful.
                    A metaphor should just be a source of names, shouldn't it?
                    Apparently not.

                    leptokurtotic 尖峰厚尾（经济学术语）

            Part II: The xUnit Example
