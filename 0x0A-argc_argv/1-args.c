#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints amount of arguments
  * @argc: n of arguments in command line
  * @argv: strings of said args
  * Return: 0 for success
  */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc);
	return (0);
}
