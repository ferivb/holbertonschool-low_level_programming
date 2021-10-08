#include "main.h"

/**
  * print_line - Prints a line according to specifications
  *
  * @n: amount of times to repeat _
  */
void print_line(int n)
{
	int r;

	if (n < 1)
	{
		_putchar(10);
	}
	else
	{
		for (r = 0; r < n; r++)
		{
			_putchar(95);
		}
		_putchar(10);
	}
}
