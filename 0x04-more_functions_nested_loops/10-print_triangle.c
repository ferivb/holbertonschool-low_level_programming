#include "main.h"

/**
  * print_triangle - Prints a triangle
  *
  * @size: base of the triangle
  */
void print_triangle(int size)
{
	int nl, ht, s;

	if (size > 0)
	{
		for (nl = 0; nl < size; nl++)
		{
			for (ht = 0; ht < nl; ht++)
			{
				for (s = 0; s < ht; s++)
				{
					_putchar(35);
				}
				_putchar(10);
			}
			_putchar(32);
		}
	}
	else
	{
		_putchar(10);
	}
}
