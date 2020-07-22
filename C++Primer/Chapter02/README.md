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

## Exercise 2.15: 
> Which of the following definitions, if any, are invalid? Why?
```c++
(a) int ival = 1.01;
(b) int &rval1 = 1.01;
(c) int &rval2 = ival;
(d) int &rval3;
```

**Answer:**   
(a) Valid, but data will be truncated.  
(b) Invalid, references will only refer to an object.  
(c) Valid, since ival is an integer.  
(d) Invalid, references must be initialized  

## Exercise 2.16:
> Which, if any, of the following assignments are invalid? If they are valid, explain what they do.
```c++
int i = 0, &r1 = i; double d = 0, &r2 = d;
(a) r2 = 3.14159;
(b) r2 = r1;
(c) i = r2;
(d) r1 = d;
```

(a) Valid, the value that r2 is referencing to will have the value of 3.14159.  
(b) Valid, The value that r2 is referencing to will have the value that r1 is referencing to.  
(c) Valid, i will have the value in which r2 is referencing to.  
(d) Valid, The value of d will be given to the value that is r1 referencing to. Data will be trunctuated if it's a
floating-point integer.

## Exercise 2.17: 
> What does the following code print?
```c++
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
```

**Answer:** The following code will print: 10 10.

## Exercise 2.18:
> Write code to change the value of a pointer. Write code to
change the value to which the pointer points.  
[Exercise 2.18.cpp](2.18.cpp)

## Exercise 2.19: 
> Explain the key differences between pointers and references.

**Answer:** There are some key differences between pointers and references in which
a pointer is an object which means it has an address in the memory while the reference
is not an which means it doesnt' have address in the memory. With that, a reference can 
only be bound to one object while a pointer can be bound to multiple objects in its lifetime.
Lastly, a reference must be initialized while a pointer can't be initialized right away.
 

## Exercise 2.20:
> What does the following program do?
```c++
int i = 42;
int *p1 = &i;
*p1 = *p1 * *p1;
```

**Answer:**

```c++
int i = 42;       //initialize i to integer data type with a value of 42
int *p1 = &i;     //give the address of variable i to integer point p1
*p1 = *p1 * *p1;  //dereference p1 which makes it *p1 = 42 * 42 which makes it 1764
```



## Exercise 2.21:
> Explain each of the following definitions. Indicate whether
any are illegal and, if so, why.
```c++
int i = 0;
(a) double* dp = &i;
(b) int *ip = i;
(c) int *p = &i;
```

**Answer:**  
(a) Illegal, a double pointer can only point to a double data type.  
(b) Illegal, a pointer can't be given an integer value even if it's zero.  
(c) Legal, since the address of integer i is being given.  

## Exercise 2.22: 
> Assuming p is a pointer to int, explain the following code:
```c++
if (p) // ...
if (*p) // ...
```

**Answer:**
```c++
if (p) // ...  //if p is pointing to an object it will return true else false
if (*p) // ... //if p has a value it will return true else false
```

## Exercise 2.23:
> Given a pointer p, can you determine whether p points to a
valid object? If so, how? If not, why not?

**Answer:** Given a pointer, it will be hard to determine whether a pointer is valid or 
not since if a pointer is invalid the result it will give will be undefined.

## Exercise 2.24: 
>Why is the initialization of p legal but that of lp illegal?
```c++
int i = 42; void *p = &i; long *lp = &i;
```

**Answer:** The definition of p is legal since the void* data type is a special pointer
data type that can hold the address of any data type with some limitations as such
it can't perform operations since data type is not given. Likewise, long and int doesn't 
match which makes it illegal.

## Exercise 2.25: 
>Determine the types and values of each of the following
variables.
```c++
(a) int* ip, i, &r = i;
(b) int i, *ip = 0;
(c) int* ip, ip2;
```

**Answer:**  
**(a)**   
ip = unintialized pointer  
i  = uninitialized integer  
r  = reference to i  
**(b)**  
i  = uninitialized integer  
ip = initialized pointer to 0  
**(c)**  
ip  = uninitialized pointer  
ip2 = uninitialized integer  

## Exercise 2.26:
> Which of the following are legal? For those that are illegal,
explain why.
```c++
(a) const int buf;
(b) int cnt = 0;
(c) const int sz = cnt;
(d) ++cnt; ++sz;
```

**Answer:**  
**(a)** Illegal, a const must be initialized after creating it.  
**(b)** Legal  
**(c)** Legal  
**(d)** Illegal, the value of const sz cannot be changed once initialized.

## Exercise 2.27:
> Which of the following initializations are legal? Explain why.
```c++
(a) int i = -1, &r = 0;
(b) int *const p2 = &i2;
(c) const int i = -1, &r = 0; 
(d) const int *const p3 = &i2;
(e) const int *p1 = &i2;
(f) const int &const r2;
(g) const int i2 = i, &r = i;
```

**Answer:**  
**(a)** Illegal initialization of r reference, it must point to an object.  
**(b)** Legal, the pointer will only point to i2 in its entire lifetime.  
**(c)** Legal, the compiler will make a temp variable which will be used to initialized r reference.  
**(d)** Legal, it will initialize a const integer with a const pointer.  
**(e)** Legal, the pointer will only initialize to a const integer.  
**(f)** Illegal, a const and a reference must be initialized.  
**(g)** Legal, a const can be reference to nonconst variables.  

## Exercise 2.28: 
> Explain the following definitions. Identify any that are illegal.
```c++
(a) int i, *const cp;
(b) int *p1, *const p2;
(c) const int ic, &r = ic;
(d) const int *const p3;
(e) const int *p;
```

**Answer:**  
**(a)** Illegal, const must be initialized and definition is invalid.  
**(b)** Illegal, definition invalid, const uninitialized.  
**(c)** Illegal, ic uninitialized.  
**(d)** Illegal, pointer p3 uninitialized.  
**(e)** Legal, since the pointer is not constant and will only point to const integer.  

## Exercise 2.29:
> Using the variables in the previous exercise, which of the following 
assignments are legal? Explain why.
```c++
(a) i = ic;
(b) p1 = p3;
(c) p1 = &ic;
(d) p3 = &ic;
(e) p2 = p1;
(f) ic = *p3;
```

**Answer:**

**(a)** Legal, since an integer can have a constant value.  
**(b)** Illegal, the pointer must be a pointer of const int.  
**(c)** Illegal, the pointer must be a pointer of const int.  
**(d)** Illegal, the pointer can't be assigned to any other object once initialized.  
**(e)** Illegal, the pointer can't be assigned to any other object once initialized.  
**(f)** Illegal, the integer can't be assigned to any other object once initialized.  