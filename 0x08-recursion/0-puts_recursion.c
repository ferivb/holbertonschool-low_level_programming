#include "main.h"

/**
  * _puts_recursion - Does what puts does
  * @s: string to puts
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
