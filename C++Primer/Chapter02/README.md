# Answers to all the exercises
Note: Answers to non-programming exercises will be listed here.

## Exercise 2.1:
> What are the differences between int, long, long long,
  and short? Between an unsigned and a signed type? Between a float and
  a double?

**Answer:**
(1) <br> 
**int** will be at least as large as **short**, a **long** at
least as large as an **int**, and **long long** at least as large as **long**. 

(2) <br> 
**unsigned type** holds number greater than or equal to zero while **signed type** holds
positive, negative, and zero numbers.

(3) <br>
**floats** are represented in one *word* and holds 7 significant digits
while **doubles** are represented in *two words* and holds 10 significant digits which provides more
precise results than float.

## Exercise 2.2: 
> To calculate a mortgage payment, what types would you use
  for the rate, principal, and payment? Explain why you selected each type.

**Answer:** In calculating the mortgage payment, I would use **double** for all since 
those requires floating-point computations and will provide more precise results than float.

## Exercise 2.3:
> What output will the following code produce?
```
	unsigned u = 10, u2 = 42;

	(1)std::cout << u2 - u << std::endl;
	(2)std::cout << u - u2 << std::endl;

	int i = 10, i2 = 42;

	(3)std::cout << i2 - i << std::endl;
	(4)std::cout << i - i2 << std::endl;
	(5)std::cout << i - u << std::endl;
	(6)std::cout << u - i << std::endl;
```

**Answer:**  
	(1) 42 - 10 = 32  
	(2) 10 - 42 = -32 *since the data type is unsigned, -32 will be converted to unsigned*  
	= 2^32 - 32 = 4294967264  
	(3) 42 - 10 = 32  
	(4) 10 - 42 = -32  
	(5) 10 - 10 = 0  
	(6) 10 - 10 = 0  

## Exercise 2.4: 
> Write a program to check whether your predictions were
  correct. If not, study this section until you understand what the problem is

[Exercise 2.04.cpp](2.04.cpp)


