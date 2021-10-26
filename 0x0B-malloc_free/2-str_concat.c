#include "main.h"

/**
  * _strlen - lenght of a string
  * @s: string
  * Return: lenght of a string
  */
int _strlen(char *s)
{
	int i;

	if (s == NULL)
	{
		return (0);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}

/**
  * str_concat - concatenates 2 strings
  * @s1: string 1 to caoncatenate
  * @s2: string 2 to concatenate
  * Return: concatenated string or null
  */
char *str_concat(char *s1, char *s2)
{
	char *ns = NULL;
	int i = 0, j = 0;

	ns = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (s1 != NULL)
	{
		for (; s1[i] != '\0'; i++)
		{
			if (ns == NULL)
			{
				return (NULL);
			}
			ns[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for (; s2[j] != '\0'; j++)
		{
			if (ns == NULL)
			{
				return (NULL);
			}
			ns[i] = s2[j];
			i++;
		}
	}
	ns[i] = '\0';
	return (ns);
}
