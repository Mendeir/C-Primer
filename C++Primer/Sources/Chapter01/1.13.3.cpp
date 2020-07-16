/*

Exercise Description:

Exercise 1.13:
Rewrite the exercises from § 1.4.1 (p. 13) using for loops.

Exercises:

Exercises Section 1.4.1
	Exercise 1.11: Write a program that prompts the user for two integers.
	Print each number in the range specified by those two integers.


*/

#include <iostream>

int main ()
{
	int value1 { 0 }, value2 { 0 };

	std::cout << "Enter two integers: ";
	std::cin >> value1 >> value2;

	if (value1 > value2)
		for (int counter { value1 }; counter >= value2; counter--)
			std::cout << counter << " ";
	else
		for (int counter { value1 }; counter <= value2; ++counter)
			std::cout << counter << " ";

	return 0;
}