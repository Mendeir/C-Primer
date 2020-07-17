/*

Exercise Description: 
Exercise 1.23: Write a program that reads several transactions and counts
how many transactions occur for each ISBN.

*/

#include <iostream>
#include "Sales_item.h"

int main ()
{
	Sales_item currentBook, bookInput, bookSum;
	int bookCount {0};

	//check if input is not empty
	if (std::cin >> currentBook)
	{
		while (std::cin >> bookInput)	//get multiple inputs until end of file is given
		{
			if (currentBook.isbn () == bookInput.isbn ()) //count transactions until a new isbn is given
			{
				++bookCount;
			}
			else //display number of transactions if a diffrent input is given and remember the isbn of new input
			{
				std::cout << "The book with an ISBN of " << currentBook.isbn () << " has " << bookCount << " transactions" << std::endl;
				currentBook = bookInput; 
				bookCount = 1;
			}
		}
	}
	return 0;
}