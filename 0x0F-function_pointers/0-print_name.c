#include "function_pointers.h"

/**
  * print_name - Prints a string using a pointer
  * @name: name string.
  * @f: funtion pointer
  */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
