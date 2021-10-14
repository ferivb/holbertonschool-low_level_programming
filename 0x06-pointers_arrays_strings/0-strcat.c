#include "main.h"

/**
  * _strcat - Concatenates 2 strings
  *
  * @dest: string to deliver
  * @src: string to concatenate
  *
  * Return: concatenated string
  */
char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	for (len = 0; dest[len] != '\0'; len++)
	{
		continue;
	}
	for (i = 0; src[i] != '\0'; len++, i++)
	{
		dest[len] = src[i];
	}
	return (dest);
}
