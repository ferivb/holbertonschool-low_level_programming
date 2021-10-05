#include "main.h"

/**
  * print_alphabet - Prints alphabet in lower case
  */
void print_alphabet(void)
{
	int a = 97;

	while (a < 122)
	{
		_putchar(a);
		a++;
	}
	_putchar(10);
}
