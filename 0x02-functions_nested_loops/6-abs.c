#include "main.h"

/**
  * _abs - computes the absolute value of an int
  *
  * @a: int to compute
  *
  * Return: Always 0.
  */
int _abs(int a)
{
	if (a < 0)
	{
		a = (a * -1);
	}
	else
	{
		a = (a * 1);
	}
	return (a);
}
