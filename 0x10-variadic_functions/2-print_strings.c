#include "variadic_functions.h"

/**
  * print_strings - fuck
  * @separator: this
  * @n: shit
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list ap;

	va_start(ap, n);
	for (; i < n; i++)
	{
		if (separator && i != 0)
			printf("%s%s", separator, va_arg(ap, char*));
		else
			printf("%s", va_arg(ap, char*));
	}
	va_end(ap);
	printf("\n");
}
