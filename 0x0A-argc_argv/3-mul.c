#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies all arguments
  * @argc: number of arguments
  * @argv: numbers to add
  * Return: 0 for success 1 for error
  */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = (mul * atoi(argv[i]));
		}
		printf("%d\n", mul);
		return (0);
	}
	printf("Error\n");
	return (1);
}
