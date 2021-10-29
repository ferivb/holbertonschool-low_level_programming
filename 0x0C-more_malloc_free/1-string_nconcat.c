#include "main.h"

/**
  * _strlen - lenght of a string
  * @s: string
  * Return: lenght of a string
  */
unsigned int _strlen(char *s)
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
  * string_nconcat - concatenates 2 strings for n chars
  * @s1: string 1 to caoncatenate
  * @s2: string 2 to concatenate
  * @n: amounts of char to add to the final string
  * Return: concatenated string or null
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ns = NULL;
	int i = 0;
	unsigned int j = 0;

	ns = malloc(sizeof(char) * (_strlen(s1) + n + 1));
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
		if (n >= _strlen(s2))
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
		for (; j < n; j++)
		{
			if (ns == NULL)
				return (NULL);
			ns[i] = s2[j];
			i++;
		}
	}
	ns[i] = '\0';
	return (ns);
}
