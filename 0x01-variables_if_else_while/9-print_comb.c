#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
		putchar(44);
		putchar(32);
		}
		n++;
	}
		putchar(10);
	return (0);
}
