# BigInt
Library for arbitrary precision numbers implemented in C++.

The header file `BigInt.h` contains the definition of the functions implemented in `BigInt.cpp`.

The file `Main.cpp` contains a few lines of testing for the library.

Currently implemented are the arithmetic operators: `+`, `-`, `*`, `/`, `+=`, `-=`, `*=`, and `/=`.  In addition, I have implement the logic operators `<`, `>`, `<=`, `>=`, `==`, and `!=`.  It has the ability to pipe into and out of `cout` and `cin` respectively via `<<` and `>>`.

The multiplication function implements Karatsuba multiplication.

The division function implements a modulus-based iterative method of finding the quotient.

The square root function implements a two-variable iterative method of finding square roots.

Also implemented are functions for:

* Exponents (`BigInt BigPow()`),
* Factorials (`BigInt BigFactorial()`),
* **Floored** `floor(sqrt())` square roots (`BigInt BigFlooredSqrt()`), 
* Primacy testing (`bool BigIsPrime()`) via 

It is also worth noting that this library does **not** support the following at this time:

* Decimals and floating point precision
* ... More to come

TODO:

* Implement recursive factorial function
* More efficient primacy tests
* More efficient square root tests (bitwise)
* BigBit data type
* BigFloat data type
