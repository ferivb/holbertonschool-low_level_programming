#include "main.h"

/**
  * _islower - determines if input is lowercase or uppercase
  *
  * @c: char to determine lower or upper case
  *
  * Return: 1 if lowercase 0 if uppercase
  */
int _islower(int c)
{
	int result;

	if (c >= 97 && c <= 122)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
