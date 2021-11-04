#include "3-calc.h"

/**
  * op_add - adds to ints
  * @a: int to add
  * @b: int to add
  * Return: addition of a+b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Substracts one int from another
  * @a: base int
  * @b: substraction
  * Return: remainder
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Multiplies two ints
  * @a: factor
  * @b: factor2
  * Return: product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides two ints
  * @a: int to be divided
  * @b: dividend(?)
  * Return: result
  */
int op_div(int a, int b)
{
	if (b)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
  * op_mod - returns the remainder of the division
  * @a: int to be divided
  * @b: dividend(?)
  * Return: remainder of division
  */
int op_mod(int a, int b)
{
	if (b)
		return (a % b);
	printf("Error\n");
	exit(100);
}
