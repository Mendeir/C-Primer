/*

Exercise Description:

Exercise 1.4: Our program used the addition operator, +, to add two
numbers. Write a program that uses the multiplication operator, *, to print
the product instead.

*/


#include <iostream>

int main ()
{
	int input1 { 0 }, input2 { 0 };

	std::cin >> input1 >> input2;

	std::cout << input1 << " * " << input2 << " = " << input1 * input2;

	return 0;
}