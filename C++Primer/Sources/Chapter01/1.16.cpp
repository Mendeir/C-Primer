/*

Exercise Description: 
Exercise 1.16: Write your own version of a program that prints the sum of
a set of integers read from cin.

*/

#include <iostream>

int main ()
{
	int input1 { 0 }, input2 { 0 }, sum { 0 };

	std::cout << "Enter two numbers: ";
	std::cin >> input1 >> input2;

	if (input1 > input2)
	{
		int temp { 0 };

		temp = input1;
		input1 = input2;
		input2 = temp;
	}

	for (int counter { input1 }; counter <= input2; ++counter)
		sum += counter;

	std::cout << "The sum for the numbers " << input1 << " and " << input2 << " is: " << sum;

	return 0;
}