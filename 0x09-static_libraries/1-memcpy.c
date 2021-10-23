#include "main.h"

/**
  * _memcpy - copies a memory area
  *
  * @n: bytes to copy
  * @src: source to copy
  * @dest: destination to paste
  *
  * Return: Destination
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	const char *s = src;

	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
