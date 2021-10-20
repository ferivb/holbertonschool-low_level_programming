#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - fuck
  * @a: this
  * @size: shit
  */
void print_diagsums(int *a, int size)
{
	int i, j;
	int suma = 0;
	int sumb = 0;

	for (i = 0, j = 0; j != size; i+=(size + 1), j++)
	{
		suma += a[i];
	}
	for (i = (size -1), j = 0; j != size; i+=(size - 1), j++)
	{
		sumb += a[i];
	}
	printf("%d, %d\n", suma, sumb);
}
