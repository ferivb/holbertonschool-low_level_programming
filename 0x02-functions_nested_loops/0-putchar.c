#include "main.h"

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char *answer = "_putchar";
	int a = 0;

	while (a < 9)
	{
		_putchar(answer[a]);
		a++;
	}
	_putchar(10);
	return (0);
}
