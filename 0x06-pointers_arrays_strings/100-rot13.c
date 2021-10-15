#include "main.h"

/**
  * rot13 - encripts/decripts in rot 13
  * @a: string to encript/decript
  * Return: decripted/encripted string
  */
char *rot13(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if ((a[i] >= 65 && a[i] <= 77) || (a[i] >= 97 && a[i] <= 109))
		{
			a[i] = a[i] + 13;
		}
		else if ((a[i] >= 78 && a[i] <= 90) || (a[i] >= 110 && a[i] <= 122))
		{
			a[i] = a[i] - 13;
		}
		else
		{
			continue;
		}
	}
	return (a);
}
