#include "main.h"

/**
  * swap_int - start
  * @a: swap to B
  * @b: swap
  * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
