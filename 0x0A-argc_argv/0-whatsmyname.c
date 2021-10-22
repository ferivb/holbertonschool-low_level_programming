#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the name of the program
  * @argc: command line items
  * @argv: strings in command line
  * Return: 0 for success
  */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
