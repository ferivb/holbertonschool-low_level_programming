#include "main.h"

/**
  * _memset - fills n bytes of a memory area with a constant
  *
  * @s: pointer
  * @b: constant
  * @n: bytes to fill
  * Return: result
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}
	return (s);
}
