#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char ch = 'a';
	char cH = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (cH = 'A'; cH <= 'Z'; cH++)
	{
		putchar(cH);
	}
		putchar(10);
	return (0);
}
