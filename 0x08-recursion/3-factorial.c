#include "main.h"

/**
  * factorial - Return de factorial of n
  * @n: Number to find the factorial of
  * Return: Factorial of n
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
