#include "main.h"

/**
  * _calloc - returns a pointer to the memory allocated
  * @nmemb: number of slots to allocate
  * @size: size of each slot
  * Return: pointer to the memory allocated
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mem = malloc(nmemb * size);
	if (mem == NULL)
	{
		return (NULL);
	}
	return (mem);
}
