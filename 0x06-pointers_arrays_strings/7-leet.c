#include "main.h"

/**
  * leet - Translates a string to 31337 h4xx0r
  *
  * @a: string to translate
  *
  * Return: String translated
  */
char *leet(char *a)
{
	int i = 0, j;
	char abc[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	int eleet[] = {4, 3, 0, 7, 1};

	while (a[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == abc[j])
			{
				a[i] = 48 + eleet[j / 2];
			}
		}
		i++;
	}
	return (a);
}
