#include "main.h"

/**
  * array_range - creates an array of ints
  * @min: starting number of the array
  * @max: last number of the array
  * Return: complete array
  */
int *array_range(int min, int max)
{
	int *range = NULL;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	range = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (range == NULL)
	{
		return (NULL);
	}
	for (; min <= max; i++)
	{
		range[i] = min;
		min++;
	}
	return (range);
}
