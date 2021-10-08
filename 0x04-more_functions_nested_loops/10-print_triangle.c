#include "main.h"

/**
  * print_triangle - Prints a triangle
  *
  * @size: base of the triangle
  */
void print_triangle(int size)
{
	int nl, s, ht, a, b;

	if (size > 0)
	{
		a = size -1;
		b = size - (size - 1);
		for (nl = 0; nl < size; nl++)
		{
			for (s = 0; s < a; s++)
			{
				_putchar(32);
			}
			for (ht = 0; ht < b; ht++)
			{
				_putchar(35);
			}
			_putchar(10);
			a = a - 1;
			b = b + 1;
		}
	}
	else
	{
		_putchar(10);
	}
}
