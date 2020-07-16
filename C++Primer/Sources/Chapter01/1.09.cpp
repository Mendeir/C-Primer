/*

Exercise 1.9: Write a program that uses a while to sum the numbers from
50 to 100

*/

#include <iostream>

int main ()
{

	int	value { 50 }, sum { 0 };

	while (value <= 100)
	{
		sum += value;
		++value;
	}

	std::cout << "The sum from 50 to 100 is " << sum;

	return 0;
}