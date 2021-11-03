#include "function_pointers.h"

/**
  * array_iterator - I still don't understand this
  * @size: size of the array
  * @action: pointer to the function
  * @array: Array to reference the printing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;

	if (action)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}
