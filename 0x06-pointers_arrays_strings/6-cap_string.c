#include "main.h"

/**
  * cap_string - capitalize every word
  *
  * @a: string to change
  *
  * Return: capitalized string
  */
char *cap_string(char *a)
{
	int i = 0;
	int cap[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int j;

	if (a[i] >= 97 && a[i] <= 122)
		a[i] = a[i] - 32;

	while (a[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (a[i] == cap[j])
			{
				if (a[i + 1] >= 97 && a[i + 1] <= 122)
				{
					a[i + 1] = a[i + 1] - 32;
				}
			}
		}
		i++;
	}
	return (a);
}
