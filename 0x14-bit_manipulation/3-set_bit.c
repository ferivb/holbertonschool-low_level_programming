#include "main.h"

/**
  * set_bit - sets a bit (1)
  * @n: number whose bit's gonna change
  * @index: position of bit to change
  * Return: 1 for success, -1 for error
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 64)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
