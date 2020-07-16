/*

Exercise Description:
Exercise 1.22: Write a program that reads several transactions for the same
ISBN. Write the sum of all the transactions that were read.

*/

class test{

};

#include <iostream>
#include "Sales_item.h"
int main ()
{
	Sales_item booksInput, bookSum;

	while (std::cin >> booksInput)
		bookSum += booksInput;

	std::cout << bookSum;

	return 0;
}