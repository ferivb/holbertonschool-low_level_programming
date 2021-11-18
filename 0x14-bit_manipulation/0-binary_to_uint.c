#include "main.h"

/**
  * binary_to_uint - converts binary to unsigned int
  * @b: string of 1s and 0s
  * Return: decimal number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i = 0;

	if (b != NULL)
	{
		for (; b[i] != '\0'; i++)
		{
			if (b[i] == '0' || b[i] == '1')
			{
				dec <<= 1;
				dec += (b[i] - 48);
			}
			else
			{
				dec = 0;
				i = 0;
				return (dec);
			}
		}
	}
	return (dec);
}
