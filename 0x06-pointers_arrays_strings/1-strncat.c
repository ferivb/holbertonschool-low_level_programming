#include "main.h"

/**
  * _strncat - concatenate a string but weirdly
  *
  * @dest: string to print
  * @src: another string
  * @n: number for another thing
  *
  * Return: string concatenated
  */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	for (len = 0; dest[len] != '\0'; len++)
	{
		continue;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
