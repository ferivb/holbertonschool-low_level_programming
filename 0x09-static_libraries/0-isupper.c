#include "main.h"

/**
  * _isupper - determines if input is uppercase or lowercase
  *
  * @c: char to determine lower or upper case
  *
  * Return: 1 if lowercase 0 if uppercase
  */
int _isupper(int c)
{
	int result;

	if (c >= 65 && c <= 90)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
