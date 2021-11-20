#include "main.h"

/**
  * clear_bit - clears a bit (0)
  * @n: number whose bit we'll clear
  * @index: position to clear
  * Return: 1 for success -1 for error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 64)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
