#include "main.h"
/**
  * create_array - Creates an array
  * @size: size of the array
  * @c: char
  * Return: string if success, Null if error
  */


char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(c) * size);
	if (str == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		str[i] = c;
	}
	return (str);
}
