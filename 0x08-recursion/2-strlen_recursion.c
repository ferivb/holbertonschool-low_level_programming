#include "main.h"

/**
  * _strlen_recursion - Same function in library
  * @s: string to count
  * Return: string lenght
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
