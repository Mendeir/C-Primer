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

**Answer:** first line of code initializes as an integer. Second line of code intializes as an octadecimal

## Exercise 2.7:
> What values do these literals represent? What type does each have?
	(a) "Who goes with F\145rgus?\012"
	(b) 3.14e1L
	(c) 1024f
	(d) 3.14L
