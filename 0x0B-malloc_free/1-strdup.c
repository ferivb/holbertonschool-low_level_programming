#include "main.h"

/**
  * _strdup - Duplicates a string
  * @str: string to duplicate
  * Return: String duplicated or null
  */
char *_strdup(char *str)
{
	char *dup;
	int len, i;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (len = 0; str[len] != '\0'; len++)
		{
			continue;
		}
		dup = malloc(sizeof(char) * len + 1);
		for (i = 0; str[i] != '\0'; i++)
		{
			if (dup == NULL)
			{
				return (NULL);
			}
			dup[i] = str[i];
		}
	}
	return (dup);
}
