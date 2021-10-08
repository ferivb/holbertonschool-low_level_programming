#include "main.h"

/**
  * print_square - Prints a square using # given n size
  *
  * @size: width and height for the square
  */
void print_square(int size)
{
	int w, h;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
