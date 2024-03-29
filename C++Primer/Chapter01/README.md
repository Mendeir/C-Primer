# Answers to all the exercises
Note: Answers to non-programming exercises will be listed here.

## Exercise 1.1: 
> Review the documentation for your compiler and determine
  what file naming convention it uses. Compile and run the main program 
  from page 2.  
  
[Exercise 1.01.cpp](1.01.cpp)

## Exercise 1.2:
> Change the program to return -1. A return value of -1 is
  often treated as an indicator that the program failed. Recompile and rerun
  your program to see how your system treats a failure indicator from main.

[Exercise 1.02.cpp](1.02.cpp)

## Exercise 1.3:
> Write a program to print Hello, World on the standard
  output.

[Exercise 1.03.cpp](1.03.cpp)

## Exercise 1.4: 
> Our program used the addition operator, +, to add two
  numbers. Write a program that uses the multiplication operator, *, to print
  the product instead.

[Exercise 1.04.cpp](1.04.cpp)

## Exercise 1.5:
> We wrote the output in one large statement. Rewrite the
  program to use a separate statement to print each operand.

[Exercise 1.05.cpp](1.05.cpp)

## Exercise 1.6:
> Explain whether the following program fragment is legal.
```
  std::cout << "The sum of " << v1;
            << " and " << v2;
             << " is " << v1 + v2 << std::endl;
```
> If the program is legal, what does it do? If the program is not legal, why
not? How would you fix it?  

<p>&nbsp;</p>

> **Answer:** The following program is legal as the first line of code ends with the semicolon in which
  indicates the end of a command thus next line of code will be incomplete due to there is no output stream
  before the output operator<< and the line that follows. Moreover, a workaround for this code can be to remove
  the semicolon and only add it  after the *std::endl* expression.

## Exercise 1.7: 
> Compile a program that has incorrectly nested comments.

[Exercise 1.07.cpp](1.07.cpp)

## Exercise 1.8: 
> Indicate which, if any, of the following output statements are
  legal:
```
  (1)std::cout << "/*";
  (2)std::cout << "*/";
  (3)std::cout << /* "*/" */;
  (4)std::cout << /* "*/" /* "/*" */;
```
> After you’ve predicted what will happen, test your answers by compiling a
  program with each of these statements. Correct any errors you encounter.

<p>&nbsp;</p>

> **Answer:** In my opinion, statements 1,2,4 are the only legal ones as they are enclosed in double quotation marks
  which indicates that they are a *string literal*. In the case of statement 4, the extra double quotation marks are
  being commented out which makes it legal. With these, statement 3 is illegal due to the first quotation mark being
  commented out making the code incomplete. This can be fixed by moving the quotation marks found inside the two delimiters
  to the end of the output operator<< or adding an additional double quotation mark before the semicolon making the correct code:
```
  (3)std::cout << "/* */ */";
```
**or**
```
  (3)std::cout << /* "*/" */";
```

## Exercise 1.9: 
> Write a program that uses a while to sum the numbers from
  50 to 100.

[Exercise 1.09.cpp](1.09.cpp)

## Exercise 1.10: 
> In addition to the ++ operator that adds 1 to its operand,
  there is a decrement operator (--) that subtracts 1. Use the decrement
  operator to write a while that prints the numbers from ten down to zero.

[Exercise 1.10.cpp](1.10.cpp)

## Exercise 1.11: 
> Write a program that prompts the user for two integers.
  Print each number in the range specified by those two integers.

[Exercise 1.11.cpp](1.11.cpp)

## Exercise 1.12: 
> What does the following for loop do? What is the final value
of sum?
```
  int sum = 0;
  for (int i = -100; i <= 100; ++i)
    sum += i;
```

<p>&nbsp;</p>

> **Answer:** The following for loop initializes int of i into -100 with a condition that will be true if i is less than
or equal to 100 which will be incremented every run of the loop. In its body, it will add the i continously starting from
-100 to 100 which will make the final value of the sum to be 0 since the sum from -100 to 0 and to 0 to 100 will be the same
but different signs which makes them 0.


## Exercise 1.13:
> Rewrite the exercises from § 1.4.1 (p. 13) using for loops.

[Exercise 1.13.1.cpp](1.13.1.cpp)   
[Exercise 1.13.2.cpp](1.13.2.cpp)  
[Exercise 1.13.3.cpp](1.13.3.cpp)  

## Exercise 1.14: 
> Compare and contrast the loops that used a for with those
  using a while. Are there advantages or disadvantages to using either form?

<p>&nbsp;</p>

> **Answer:** *For loop* and *while loop* are both used in controlling the flow of the program with the *for loop* you
are able to initialize, set a condition, and an expression all in one place while the *while loop* is different from
the other hand, in which you initialize the varaible before the loop and then set a condition statement in which you
increment it in the *while loop* body. The advantage of *for loop* over the *while loop* is that it makes the code readable.
While the advantage *while loop* over the *for loop* is that it handles better when you don't know the number of
iterations/inputs needed in advance.


## Exercise 1.15:
> Write programs that contain the common errors discussed in
  the box on page 16. Familiarize yourself with the messages the compiler
  generates. 
 
> None

## Exercise 1.16:
> Write your own version of a program that prints the sum of
  a set of integers read from cin.

[Exercise 1.16.cpp](1.16.cpp)

## Exercise 1.17: 
> What happens in the program presented in this section if the
  input values are all equal? What if there are no duplicated values?

<p>&nbsp</p>

> **Answer:** Based on the code given, if all the input values are equal, then the program will continue to get input
from the user continously until it detects another statement or end-of-file key.

## Exercise 1.18: 
> Compile and run the program from this section giving it only
  equal values as input. Run it again giving it values in which no number is
  repeated.

[Exercise 1.18.cpp](1.18.cpp)

## Exercise 1.19: 
> Revise the program you wrote for the exercises in § 1.4.1 (p.13) that 
  printed a range of numbers so that it handles input in which the first
  number is smaller than the second

See [Exercise 1.13.3cpp](1.13.3.cpp) or [Exercise 1.11.cpp](1.11.cpp)

## Exercise 1.20: 
> http://www.informit.com/title/032174113 contains a copy of
  Sales_item.h in the Chapter 1 code directory. Copy that file to your
  working directory. Use it to write a program that reads a set of book sales
  transactions, writing each transaction to the standard output.

[Exercise 1.20.cpp](1.20.cpp)

## Exercise 1.21: 
> Write a program that reads two Sales_item objects that
  have the same ISBN and produces their sum.

[Exercise 1.21.cpp](1.21.cpp)

## Exercise 1.22: 
> Write a program that reads several transactions for the same
  ISBN. Write the sum of all the transactions that were read.

[Exercise 1.22.cpp](1.22.cpp)

## Exercise 1.23: 
> Write a program that reads several transactions and counts
  how many transactions occur for each ISBN.

[Exercise 1.23.cpp](1.23.cpp)

## Exercise 1.24: 
> Test the previous program by giving multiple transactions
  representing multiple ISBNs. The records for each ISBN should be grouped
  together.

[Exercise 1.23.cpp](1.23.cpp)

## Exercise 1.25:
> Using the Sales_item.h header from the Web site,
  compile and execute the bookstore program presented in this section.

[Exercise 1.25.cpp](1.25.cpp)