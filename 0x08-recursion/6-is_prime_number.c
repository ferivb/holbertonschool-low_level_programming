#include "main.h"

/**
  * aux - aux function
  * @n: number to analize
  * @i: counter
  * Return: result
  */
int aux(int n, int i)
{
	if (n % i == 0 && n != i)
	{
		return (0);
	}
	if (n == i)
	{
		return (1);
	}
	return (aux(n, i + 1));
}

/**
  * is_prime_number - checks if n is prime
  * @n: number to check
  * Return: 1 if prime 0 if not
  */


int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (aux(n, 2));
}
