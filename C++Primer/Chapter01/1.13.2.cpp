/*

Exercise Description:

Exercise 1.13:
Rewrite the exercises from § 1.4.1 (p. 13) using for loops.

Exercises:

Exercises Section 1.4.1
	Exercise 1.10: In addition to the ++ operator that adds 1 to its operand,
	there is a decrement operator (--) that subtracts 1. Use the decrement
	operator to write a while that prints the numbers from ten down to zero.


*/

#include <iostream>

int main ()
{

	for (int value { 10 }; value >= 0; value--)
		std::cout << value << " ";


	return 0;
}