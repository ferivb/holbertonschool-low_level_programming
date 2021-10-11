#include "main.h"

/**
  * swap_int - Swaps two intergers
  *
  * @a: interger to swap with int b
  * @b: interger to swap with int a
  */
void swap_int(int *a, int *b)
{
	int t;

	t = *b;
	*b = *a;
	*a = t;
}
