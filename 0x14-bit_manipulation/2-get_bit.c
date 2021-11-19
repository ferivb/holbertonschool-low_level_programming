#include "main.h"

/**
  * get_bit - gets the bit at a given index for a num
  * @n: number to search bits on
  * @index: position to start looking at
  * Return: bit of n at index position
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp = 1 << index;

	if (n == '\0')
		return (-1);
	if (n & temp)
		return (1);
	else
		return (0);
}
