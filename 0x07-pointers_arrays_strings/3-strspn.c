#include "main.h"

/**
  * _strspn - counts the bytes of a prefix substring
  *
  * @s: string to count from
  * @accept: criteria of chars
  * Return: chars repeated
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
