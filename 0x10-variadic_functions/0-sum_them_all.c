#include "variadic_functions.h"

/**
  * sum_them_all - sums arguments provided
  * @n: amount of arguments
  * Return: result of the addition or 0 for err
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;

	if (n)
	{
		va_list ap;

		va_start(ap, n);
		for (; i < n; i++)
			sum += va_arg(ap, unsigned int);
		va_end(ap);
		return (sum);
	}
	return (0);
}
