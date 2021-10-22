#include <stdio.h>
#include <stdlib.h>

/**
  * main - sums values
  * @argc: amount of args to sum
  * @argv: values to sum
  * Return: 1 for err 0 for success
  */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	for (; i < argc; i++)
	{
		if (*argv[i] < 48 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
	sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
