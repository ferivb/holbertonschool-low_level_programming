#include "variadic_functions.h"

/**
  * print_numbers - print several numbers
  * @separator: separator between the numbers
  * @n: amount of numbers
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	if (n)
	{
		va_list ap;

		va_start(ap, n);
		for (; i < n; i++)
		{
			if (separator && i != 0)
				printf("%s%d", separator, va_arg(ap, unsigned int));
			else
				printf("%d", va_arg(ap, unsigned int));
		}
		va_end(ap);
		printf("\n");
	}
}
