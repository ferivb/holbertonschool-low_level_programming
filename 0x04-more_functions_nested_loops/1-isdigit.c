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

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		result = 0;
	}
	else
	{
		result = 1;
	}
	return (result);
}
