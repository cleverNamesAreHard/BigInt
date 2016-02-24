#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include "BigInt.h"
using namespace std;

void arithmeticTests() {
	BigInt current_num = 2;
	current_num = BigPow(current_num, 16);
	cout << current_num << endl;

	current_num = BigInt("1000000000000000000000000000000000000000000000000000000000000000000000000000");
	BigInt newNum("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
	BigInt answer = current_num * newNum;
	cout << answer << endl;

	BigInt test_num(6);
	cout << BigFactorial(test_num) << endl;

	current_num = BigInt(6);
	newNum = BigInt(2);
	answer = current_num / newNum;
	cout << answer << endl;

	current_num = BigInt(11);
	answer = current_num / newNum;
	cout << answer << endl;
}

void primacyTest() {
	int num_primes = 100;
	// Test starts at 9 because the BigIsPrime function checks for < 9, ! % 2 == 0, and > 0.
	BigInt current_test = 9;
	vector<BigInt> primes;
	while (num_primes > 0)
	{
		if (BigIsPrime(current_test))
		{
			primes.push_back(current_test);
			num_primes--;
		}
		current_test += 1;
	}
	
	for (BigInt prime : primes)
		cout << prime << endl;
}

int main()
{
	arithmeticTests();
	printf("\n\n");
	primacyTest();

	system("pause");
	return 0;
}
 