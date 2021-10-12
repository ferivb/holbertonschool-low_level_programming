#include "main.h"

/**
  * rev_string - Reverses a given string
  *
  * @s: string to be reversed
  */
void rev_string(char *s)
{
	int i = 0, j = 0;
	int slen = 0;
	char aux[1024];
	char *placeholder = s;

	while (*s != '\0')
	{
		slen++;
		s++;
	}

	s = placeholder;

	for (i = slen - 1; i >= 0; i--, j++)
		aux[j] = s[i];

	aux[j] = '\0';

	for (i = 0; aux[i] != '\0'; i++)
		s[i] = aux[i];
}
