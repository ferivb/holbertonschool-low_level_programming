#include "main.h"

/**
  * _strstr - finds a needle in a haystack
  *
  * @haystack: Haystack to search in
  * @needle: Needle to find
  *
  * Return: Returns the needle to the propietor
  */
char *_strstr(char *haystack, char *needle)
{
	int len;
	char c, sc;

	for (len = 0; needle[len] =! '\0'; len++)
	{
		continue;
	}
	do {
		do {
			if ((sc = *haystack++) == 0)
			{
				return (0);
			}
		} while (sc != c);
	}while
