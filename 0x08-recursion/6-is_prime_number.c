#include "main.h"

/**
  * is_prime_number - prime number finder
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

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (aux(n, 2));
}
