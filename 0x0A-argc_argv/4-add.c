#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - sums values
  * @argc: amount of args to sum
  * @argv: values to sum
  * Return: 1 for err 0 for success
  */
int main(int argc, char *argv[])
{
	int i = 1, j, sum = 0;

	for (; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
