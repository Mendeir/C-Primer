/*

Exercise Description:
Exercise 2.8: Using escape sequences, write a program to print 2M followed
by a newline.Modify the program to print 2, then a tab, then an M, followed
by a newline

*/

#include <iostream>

int main ()
{
	std::cout << "\062\x4d\n";
	std::cout << "2\tM\n";

	return 0;
}