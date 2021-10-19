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
	int i, j = 0, len;

	for (len = 0; needle[len] != '\0'; len++)
	{
		continue;
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			for (; needle[j] != '\0'; j++)
			{
				if (needle[j] != haystack[i] && j < len)
				{
					j = 0;
					break;
				}
				else
				{
					i++;
				}
			}
		}
	}
	if (j == len)
	{
		return (needle);
	}
	else
	{
	return ("NULL");
	}
}
