#include "main.h"

/**
  * print_alphabet_x10 - prints alphabet in lowercase 10 times
  */
void print_alphabet_x10(void)
{
	int b = 0, a;

	while (b < 10)
	{
		a = 97;
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar(10);
		b++;
	}
}
