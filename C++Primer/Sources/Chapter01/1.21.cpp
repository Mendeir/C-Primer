/*

Exercise 1.21: Write a program that reads two Sales_item objects that
have the same ISBN and produces their sum.

*/

#include <iostream>
#include "Sales_item.h"

int main ()
{
	Sales_item book1, book2;

	std::cin >> book1 >> book2;

	std::cout << book1 + book2 << std::endl;

	return 0;
}