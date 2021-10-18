#include "main.h"

/**
  * _strchr - locates a char in a string
  *
  * @c: char to search
  * @s: return to this var
  *
  * Return: The char found
  */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (0);
}
