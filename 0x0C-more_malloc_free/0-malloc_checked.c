#include "main.h"

/**
  * malloc_checked - reserves space in memory
  * @b: memory to allocate
  * Return: pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	char *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
