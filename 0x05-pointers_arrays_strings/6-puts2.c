#include "main.h"

/**
  * puts2 - prints every other char of a string
  *
  * @str: string to alter
  */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar(10);
}
