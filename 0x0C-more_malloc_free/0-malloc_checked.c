#include "main.h"

/**
  * malloc_checked - reserves space in memory
  * @mem: pointer to return
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
