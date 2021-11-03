#include "function_pointers.h"

/**
  * int_index - searches for an int
  * @array: array to search on
  * @size: size of the array
  * @cmp: pointer to the function that searches
  * Return: returns the position where the int was found
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp && size > 0)
	{
		if (size)
		{
			for (; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}
	return (-1);
}
