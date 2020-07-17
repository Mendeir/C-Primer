/*

Exercise Description:

Exercise 1.13:
Rewrite the exercises from § 1.4.1 (p. 13) using for loops.

Exercises: 

Exercises Section 1.4.1
	Exercise 1.9: Write a program that uses a while to sum the numbers from
	50 to 100.


*/



#include <iostream>

int main ()
{

	int sum { 0 };
	for (int value { 50 }; value <= 100; ++value)
		sum += value;

	std::cout << "Sum of 50 to 100 is: " << sum << std::endl;


	return 0;
}