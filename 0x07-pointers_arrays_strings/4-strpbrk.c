#include "main.h"

/**
  * _strpbrk - locates s in accept
  *
  * @s: string
  * @accept: string to search in
  *
  * Return: Result
  */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*a++ == *s)
			{
				return (s);
			}
		}
		++s;
	}
	return (0);
}
