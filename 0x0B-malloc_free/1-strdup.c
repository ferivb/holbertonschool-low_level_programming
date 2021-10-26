#include "main.h"

/**
  * _strdup - Duplicates a string
  * @str: string to duplicate
  * Return: String duplicated or null
  */
char *_strdup(char *str)
{
	char *dup = NULL;
	int len, i;

	if (str != NULL)
	{
		for (len = 0; str[len] != '\0'; len++)
		{
			continue;
		}
		dup = malloc(sizeof(char) * len);
		for (i = 0; str[i] != '\0'; i++)
		{
			dup[i] = str[i];
		}
	}
	return (dup);
}
