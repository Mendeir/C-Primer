# Answers to all the exercises
Note: Answers to non-programming exercises will be listed here.

## Exercise 1.1: 
> Review the documentation for your compiler and determine
  what file naming convention it uses. Compile and run the main program 
  from page 2.  
  
[Exercise 1.1.cpp](1.1.cpp)

## Exercise 1.2:
> Change the program to return -1. A return value of -1 is
  often treated as an indicator that the program failed. Recompile and rerun
  your program to see how your system treats a failure indicator from main.

## Exercise 1.3:
> Write a program to print Hello, World on the standard
  output.

## Exercise 1.4: 
> Our program used the addition operator, +, to add two
  numbers. Write a program that uses the multiplication operator, *, to print
  the product instead.

## Exercise 1.5:
> We wrote the output in one large statement. Rewrite the
  program to use a separate statement to print each operand.

## Exercise 1.6:
> Explain whether the following program fragment is legal.
```
  std::cout << "The sum of " << v1;
            << " and " << v2;
             << " is " << v1 + v2 << std::endl;
```
> If the program is legal, what does it do? If the program is not legal, why
not? How would you fix it?
  
> **Answer:** The following program is legal as the first line of code ends with the semicolon in which indicates the end of a command thus next line of code will be 
  incomplete  due to there is no output stream before the output operator<< and the line that follows. Moreover, a workaround for this code can be to remove the semicolon and       only add it  after the *std::endl* expression.

## Exercise 1.7: 
> Compile a program that has incorrectly nested comments.

## Exercise 1.8: 
> Indicate which, if any, of the following output statements are
  legal:
```
  std::cout << "/*";
  std::cout << "*/";
  std::cout << /* "*/" */;
  std::cout << /* "*/" /* "/*" */;
```
> After you’ve predicted what will happen, test your answers by compiling a
  program with each of these statements. Correct any errors you encounter.
    
> **Answer:** In my opinion, the first 2 statements are the only legal ones as they are enclosed in double quotation marks which indicates that they are a *string literal*. To correct the program the double quotation marks must be moved after the output *operator<<* and end before the semicolon to avoid the code being commented out, thus making the program:
```
  std::cout << "/*";
  std::cout << "*/";
  std::cout << "/* */ */";
  std::cout << "/* */ /* /* */";
```

## Exercise 1.9: 
> Write a program that uses a while to sum the numbers from
  50 to 100.

## Exercise 1.10: 
> In addition to the ++ operator that adds 1 to its operand,
  there is a decrement operator (--) that subtracts 1. Use the decrement
  operator to write a while that prints the numbers from ten down to zero.

## Exercise 1.11: 
> Write a program that prompts the user for two integers.
  Print each number in the range specified by those two integers.

## Exercise 1.12: 
> What does the following for loop do? What is the final value
of sum?
```
  int sum = 0;
  for (int i = -100; i <= 100; ++i)
    sum += i;
```

## Exercise 1.13:
> Rewrite the exercises from § 1.4.1 (p. 13) using for loops.

## Exercise 1.14: 
> Compare and contrast the loops that used a for with those
  using a while. Are there advantages or disadvantages to using either form?

## Exercise 1.15:
> Write programs that contain the common errors discussed in
  the box on page 16. Familiarize yourself with the messages the compiler
  generates.

## Exercise 1.16:
> Write your own version of a program that prints the sum of
  a set of integers read from cin.

## Exercise 1.17: 
> What happens in the program presented in this section if the
  input values are all equal? What if there are no duplicated values?

## Exercise 1.18: 
> Compile and run the program from this section giving it only
  equal values as input. Run it again giving it values in which no number is
  repeated.

## Exercise 1.19: 
> Revise the program you wrote for the exercises in § 1.4.1 (p.
  13) that printed a range of numbers so that it handles input in which the first
  number is smaller than the second

## Exercise 1.20: 
> http://www.informit.com/title/032174113 contains a copy of
  Sales_item.h in the Chapter 1 code directory. Copy that file to your
  working directory. Use it to write a program that reads a set of book sales
  transactions, writing each transaction to the standard output.

## Exercise 1.21: 
> Write a program that reads two Sales_item objects that
  have the same ISBN and produces their sum.

## Exercise 1.22: 
> Write a program that reads several transactions for the same
  ISBN. Write the sum of all the transactions that were read.

## Exercise 1.23: 
> Write a program that reads several transactions and counts
  how many transactions occur for each ISBN.

## Exercise 1.24: 
> Test the previous program by giving multiple transactions
  representing multiple ISBNs. The records for each ISBN should be grouped
  together.

## Exercise 1.25:
> Using the Sales_item.h header from the Web site,
  compile and execute the bookstore program presented in this section.
