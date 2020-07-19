# Answers to all the exercises
Note: Answers to non-programming exercises will be listed here.

## Exercise 2.1:
> What are the differences between int, long, long long,
  and short? Between an unsigned and a signed type? Between a float and
  a double?

**Answer:**  
**(1)**  
**int** will be at least as large as **short**, a **long** at
least as large as an **int**, and **long long** at least as large as **long**. 

**(2)**  
**unsigned type** holds number greater than or equal to zero while **signed type** holds
positive, negative, and zero numbers.

**(3)**  
**floats** are represented in one *word* and holds 6 significant digits
while **doubles** are represented in *two words* and holds 10 significant digits which provides more
precise results than float.

## Exercise 2.2: 
> To calculate a mortgage payment, what types would you use
  for the rate, principal, and payment? Explain why you selected each type.

**Answer:** In calculating the mortgage payment, I would use **double** for all since 
those requires floating-point computations and will provide more precise results than float.

## Exercise 2.3:
> What output will the following code produce?
```c++
unsigned u = 10, u2 = 42;

(1) std::cout << u2 - u << std::endl;
(2) std::cout << u - u2 << std::endl;

int i = 10, i2 = 42;

(3) std::cout << i2 - i << std::endl;
(4) std::cout << i - i2 << std::endl;
(5) std::cout << i - u << std::endl;
(6) std::cout << u - i << std::endl;
```

**Answer:**    
**(1)** 42 - 10 = 32  
**(2)** 10 - 42 = -32 *since the data type is unsigned, -32 will be converted to unsigned*  
&emsp;&emsp;&emsp;&emsp;&emsp;= 2^32 - 32 = 4294967264  
**(3)** 42 - 10 = 32  
**(4)** 10 - 42 = -32  
**(5)** 10 - 10 = 0  
**(6)** 10 - 10 = 0  

## Exercise 2.4: 
> Write a program to check whether your predictions were
  correct. If not, study this section until you understand what the problem is

[Exercise 2.04.cpp](2.04.cpp)

## Exercise 2.5: 
> Determine the type of each of the following literals. Explain
  the differences among the literals in each of the four examples:  
	(a) 'a', L'a', "a", L"a"
	(b) 10, 10u, 10L, 10uL, 012, 0xC
	(c) 3.14, 3.14f, 3.14L
	(d) 10, 10u, 10., 10e-2

**Answer:**   
**(a)**
```c++  
'a'  = char  
L'a' = wchar_t  
"a"  = const char [2]  
L"a" = const wchar_t [2]  
```	

 A ***char*** has the same size as a single machine byte  
 A ***wchar_t*** has the size enought to hold any character in the machine's largest extend char set  
 A ***const char*** is a string literal in which a compiler appends a null character ('\0') on each one.  
 A ***const wchar_t*** same as wchar_t but as a string literal.  

**(b)**
```c++
10   = int  
10u  = unsigned int  
10L  = long int  
10uL = unsigned long  
012  = octadecimal int  
0xC  = hexadecimal int  
```
An ***int*** represents integer values.  
An ***unsigned int*** represents integer values equal or higher than zero.  
A ***long int*** represents long integer values that is as large as int.  
An ***unsigned long*** represents unsigned long integer values that is large as int with values equal or higher than zero.  
An ***octadecimal int*** represents octadecimals and begins with a 0.  
A ***hexadecimal int*** represents hexadecimals and begins with 0x or 0X.  

**(c)**
```c++
3.14  = double
3.14f = float
3.14L = long double
```

A ***double*** holds 10 significant digits and represented in *two words.*  
A ***float*** holds 6 significant digits and represented in *one word.*  
A ***long double*** holds 10 significant digits and represented in *four words.*  

**(d)**
```c++
10    = int 
10u   = unsigned int
10.   = double 
10e-2 = double
```
An integer with a decimal point or an exponent specified using scientific notation
automatically represents a floating-point literal. Default floating-point literals 
have type ***double.***

## Exercise 2.6: 
> What, if any, are the differences between the following definitions:
```c++
int month = 9, day = 7;
int month = 09, day = 07;
```

**Answer:** First line of code initializes as an integer. Second line of code intializes as an octadecimal

## Exercise 2.7:
> What values do these literals represent? What type does each have?
	(a) "Who goes with F\145rgus?\012"
	(b) 3.14e1L
	(c) 1024f
	(d) 3.14L

**Answer:** 
```c++
(a) "Who goes with Fergus?" = String literal
(b) 3.14e1L                 = Long double
(c) 1024f                   = N/a since 1024 is not a floating-point number
(d) 3.14L                   = Long double
```

## Exercise 2.8:
> Using escape sequences, write a program to print 2M followed
by a newline. Modify the program to print 2, then a tab, then an M, followed
by a newline

[Exercise 2.8.cpp](2.08.cpp) 

## Exercise 2.9:
> Explain the following definitions. For those that are illegal,
explain what’s wrong and how to correct it.
```c++
(a) std::cin >> int input_value;
(b) int i = { 3.14 };
(c) double salary = wage = 9999.99;
(d) int i = 3.14;
```

**Answer:** 
``` c++
(a) std::cin >> int input_value;     //Illegal, since the variable is not initialized beforehand.
//Correct:
	int input_value = 0;
	std::cin >> input_value;

(b) int i = { 3.14 };                //Illegal, there will be loss of data due to intializing a floating-point value to a int in which the compiler will not allow due to the list initialization.
//Correct:
	double i = { 3.14 };

(c) double salary = wage = 9999.99;  //Illegal, since wage isn't initialized
//Correct:
	double wage { 0 };
	double salary = wage = 9999.99;

(d) int i = 3.14;                    //i will be initialized to 3 since the given value is a floating-point the compiler will need to trunctuate the decimal values.
```

## Exercise 2.10: 
>What are the initial values, if any, of each of the following
variables?
```c++
std::string global_str;
int global_int;

int main()

{
	int local_int;
	std::string local_str;
}
```
**Answer:**
```c++
std::string global_str = empty string
int global_int         = 0
int local_int          = undefined value / garbage value
std::string local_str  = empty string;
```

## Exercise 2.11: 
>Explain whether each of the following is a declaration or a
definition:
```c++
(a) extern int ix = 1024;
(b) int iy;
(c) extern int iz;
```

**Answer:**  
**(a)** Definition, since it allocates memory and gives it an initial value.  
**(b)** Definition, since it allocates memory.  
**(c)** Declaration, since an ***extern*** keyword is given. 

## Exercise 2.12:
> Which, if any, of the following names are invalid?
```c++
(a) int double = 3.14;
(b) int _;
(c) int catch-22;
(d) int 1_or_2 = 1;
(e) double Double = 3.14;
```

**Answer:**  
**(a)** Invalid, since double is a reserved word.  
**(b)** Valid, an identifier can start with _.  
**(c)** Invalid, since "-" is not accepted in naming an identifier.  
**(d)** Invalid, An identifier shouldn't start with a number.  
**(e)** Valid, since a Double with a capital "D" is not a reserved keyword.

## Exercise 2.13:
> What is the value of j in the following program?
```c++
int i = 42;

int main()
{
	int i = 100;
	int j = i;
}
```

**Answer:** The value of j will be 100 since no scope operator is used, the 
local variable inside the scope will be used.

## Exercise 2.14: 
> Is the following program legal? If so, what values are
printed?

```c++
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
sum += i;
std::cout << i << " " << sum << std::endl;
```

**Answer:** The following program is legal and the value printed will be 100 and 45
since the initialized variable **i** in the ***for loop*** will be destroyed 
after the loop ends thus the **i** that will be used will be the one initialized
earlier that has a value of 100. 