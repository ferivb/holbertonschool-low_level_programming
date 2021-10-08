#include "main.h"

/**
  * print_most_numbers - Print numbers 0..9 sans 2 and 4
  */
void print_most_numbers(void)
{
	int a = 48;

	while (a <= 57)
	{
		if (a == 50 || a == 52)
		{
			a++;
		}
		else
		{
			_putchar(a);
			a++;
		}
	}
	_putchar(10);
}
