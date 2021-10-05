#include "main.h"

/**
  * print_sign - Prints the sign of the variable
  *
  * @n: variable
  *
  * Return: 1 if n > 0, 0 if n == 0, -1 if n < 0
  */
int print_sign(int n)
{
	int result;

	if (n < 0 && n != 0)
	{
		_putchar(45);
		result = -1;
	}
	else if (n == 0)
	{
		_putchar(48);
		result = 0;
	}
	else
	{
		_putchar(43);
		result = 1;
	}
	return (result);
}
