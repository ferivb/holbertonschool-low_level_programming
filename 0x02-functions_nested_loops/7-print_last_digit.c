#include "main.h"

/**
  * print_last_digit - Prints the last digit
  *
  * @j: variable
  *
  * Return: always 0
  */
int print_last_digit(int j)
{
	int ch = j % 10;

	if (ch < 0)
	{
		ch = (ch * -1);
	}
	_putchar(ch + '0');
	return (ch);
}
