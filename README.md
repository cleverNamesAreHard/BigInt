# BigInt
Library for arbitrary precision numbers implemented in C++.

The header file `BigInt.h` contains the definition of the functions implemented in `BigInt.cpp`.

The file `Main.cpp` contains a few lines of testing for the library.

Currently implemented are the operators `+`, `-`, `*`, `/`, `+=`, `-=`, `*=`, and `/=`.  Included at this time are functions for exponents (`BigPow(BigInt)`), and factorials (`BigFactorial(BigInt)`).

It is also worth noting that this library does **not** support the following at this time:

* Decimals and floating point precision
* Division with answers with decimals
* I'm sure I'll realize more soon.

Usage:

	BigInt current_num = 2;
	current_num = BigPow(current_num, 16);
	cout << current_num << endl;

`>65536`

	current_num = BigInt("1000000000000000000000000000000000000000000000000000000000000000000000000000");
	BigInt newNum("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
	BigInt answer = current_num * newNum;
	cout << answer << endl;

`>99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999000000000000000000000000000000000000000000000000000000000000000000000000000`

	BigInt test_num(6);
	cout << BigFactorial(test_num) << endl;

`>720`

	current_num = BigInt(6);
	newNum = BigInt(2);
	answer = current_num / newNum;
	cout << answer << endl;

`>3`
