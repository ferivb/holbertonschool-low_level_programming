#include "main.h"

/**
  * print_diagonal - Draws a diagonal line
  *
  * @n: vertical lenght of the line
  */
void print_diagonal(int n)
{
	int e, s;

	if (n > 0)
	{
		for (e = 0; e < n; e++)
		{
			for (s = 0; s < e; s++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
	_putchar(10);
	}
}
