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
		for (; i < (n - 1); i++)
		{
			if (separator)
				printf("%d%s", va_arg(ap, unsigned int), separator);
			else
				printf("%d", va_arg(ap, unsigned int));
		}
		i++;
		printf("%d\n", va_arg(ap, unsigned int));
		va_end(ap);
	}
}
