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
	int i;
	
	if (min > max)
	{
		return (NULL);
	}
	range = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (range == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		range[i] = i;
	}
	return (range);
}
