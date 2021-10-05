#include "main.h"

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char *answer = "_putchar\n";
	int a = 0;

	while (a < 9)
	{
		_putchar(answer[a]);
		a++;
	}
	return (0);
}
