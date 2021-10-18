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
	const unsigned char ub = b;

	for (; 0 < n; ++s, --n)
	{
		*s = ub;
	}
	return (s);
}
