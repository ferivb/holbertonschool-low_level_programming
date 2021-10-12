#include "main.h"

/**
  * puts_half - Puts the second calf of a string
  *
  * @str: string to cut in half
  */
void puts_half(char *str)
{
	int count, i;

	for (count = 0; str[count]; count++)
	{
		continue;
	}
	if (count % 2 != 0)
		count = count + 1;
	i = count / 2;
	for (; i <= count; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
