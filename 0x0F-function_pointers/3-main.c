#include "3-calc.h"

/**
  * main - basic calculator
  * @argc: counter for command line args
  * @argv: array for command line args
  * Return: result for math operation
  */
int main(int argc, char *argv[])
{
	int (*calc)(int, int);
	int num1 = 0, num2 = 0;
	char *operator;

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		operator = argv[2];
		if (*(operator + 1))
		{
			printf("Error\n");
			exit(99);
		}
		calc = get_op_func(operator);
		if (!calc)
		{
			printf("Error\n");
			exit(99);
		}
		printf("%d\n", calc(num1, num2));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
