#include <iostream>
/*

Exercise Description:
Exercise 2.18: Write code to change the value of a pointer.Write code to
change the value to which the pointer points.

*/

int main ()
{
	int test = 30;
	int* ptr { &test };
	int value = 45;
	
	std::cout << *ptr << " " << test << " " << value << std::endl;
	
	*ptr = 50;	//Change value of pointer

	std::cout << *ptr << " " << test << " " << value << std::endl;

	ptr = &value; //Change the value to which the pointer points

	std::cout << *ptr << " " << test << " " << value << std::endl;


	return 0;
}