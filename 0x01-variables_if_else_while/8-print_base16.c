#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char n = 48;
	char ch = 97;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (ch = 97; ch <= 102; ch++)
	{
		putchar(ch);
	}
		putchar(10);
	return (0);
}
