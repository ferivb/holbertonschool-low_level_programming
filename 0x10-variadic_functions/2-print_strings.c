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
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		else if	(separator && i != 0)
			printf("%s%s", separator, str);
		else
			printf("%s", str);
	}
	va_end(ap);
	printf("\n");
}
