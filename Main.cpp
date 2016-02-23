#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "BigInt.h"
using namespace std;

int main()
{
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

	system("pause");
	return 0;
}
 