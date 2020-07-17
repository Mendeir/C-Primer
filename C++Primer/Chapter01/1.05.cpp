/*

Exercise Description:

Exercise 1.5: We wrote the output in one large statement.
Rewrite the program to use a separate statement to print each operand.

*/

#include <iostream>
int main ()
{
	
	std::cout << "/*";
	std::cout << "*/";
	std::cout << /* */" */";
	std::cout << /* "*/" /* "/*" */;

	return 0;
}