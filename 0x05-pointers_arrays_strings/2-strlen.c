#include "main.h"

/**
  * _strlen - counts the amount of char in  a string
  *
  * @s: string
  *
  * Return: amount of chars
  */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
