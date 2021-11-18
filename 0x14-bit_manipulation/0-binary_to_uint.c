#include "main.h"

/**
  * _slen - lenght of a string
  * @num: string
  * Return: lenght of a string
  */
unsigned int _slen(const char *num)
{
	unsigned int i = 0;

	for (; num[i] != '\0'; i++)
		continue;
	return (i);
}

/**
  * myPow - potenciación
  * @base: base
  * @exp: exponent
  * Return: result
  */
unsigned int myPow(unsigned int base, unsigned int exp)
{
	unsigned int i;
	unsigned int number = 1;

	for (i = 0; i < exp; ++i)
		number *= base;
	return (number);
}

/**
  * binary_to_uint - converts binary to decimal
  * @b: string
  * Return: decimal number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i = 0, count = 0;

	i = _slen(b);
	if (b)
	{
		for (i = i - 1; b[count]; count++, i--)
		{
			if (b[count] == '1')
			{
				dec = dec + myPow(2, i);
			}
			else if (b[count] != '0')
			{
				dec = 0;
				return (0);
			}
		}
	}
	return (dec);
}
