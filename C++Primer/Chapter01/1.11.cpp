/*

Write a program that prompts the user for two integers.
Print each number in the range specified by those two integers.

*/

#include <iostream>

int main ()
{
	int input1 { 0 }, input2 { 0 };

	std::cout << "Enter two integers: ";
	std::cin >> input1 >> input2;

	if (input1 > input2)
	{
		while (input2 <= input1)
		{
			std::cout << input1 << " ";
			--input1;
		}
	}
	else
	{
		while (input1 <= input2)
		{
			std::cout << input1 << " ";
			++input1;
		}
	}


	return 0;
}