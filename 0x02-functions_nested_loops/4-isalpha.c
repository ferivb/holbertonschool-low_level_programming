#include "main.h"

/**
  * _isalpha - determines if input is an alpha char
  *
  * @c: char to determine if alpha or not
  *
  * Return: 1 if lowercase 0 if uppercase
  */
int _isalpha(int c)
{
	int result;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
