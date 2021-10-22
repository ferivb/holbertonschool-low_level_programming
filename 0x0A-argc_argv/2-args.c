#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints each argument per line
  * @argc: amount of arguments in cmd line
  * @argv: strings in cmd
  * Return: 0 for success
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
