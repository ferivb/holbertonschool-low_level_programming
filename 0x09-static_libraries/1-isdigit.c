#include "main.h"

/**
  * _isdigit - determines if input is an alpha char
  *
  * @c: char to determine if alpha or not
  *
  * Return: 1 if lowercase 0 if uppercase
  */
int _isdigit(int c)
{
	int result;

	if (c >= 48 && c <= 57)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
