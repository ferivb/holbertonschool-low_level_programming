#include "main.h"

/**
  * aux - Recurses through i
  * @i: potential
  * @n: root of all evil
  * Return: -1 for err i for root
  */
int aux(int n, int i)
{
	if (n < (i * i))
	{
		return (-1);
	}
	if (n == (i * i))
	{
		return (i);
	}
	return (aux(n, i + 1));
}

/**
  * _sqrt_recursion - finds the root square of n
  * @n: variable
  * Return: returns -1 for err or square root
  */
int _sqrt_recursion(int n)
{
	return (aux(n, 1));
}
