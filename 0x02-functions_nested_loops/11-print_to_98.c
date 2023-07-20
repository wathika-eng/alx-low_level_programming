#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - start
  * @n: print numbers and end with 98
  * Return: 0 Always
 */

void print_to_98(int n)
{
	int a = (n <= 98) ? 1 : -1;

	while (n != 98)
	{
		printf("%d, ", n);
		n += a;
	}
	printf("%d\n", n);
}
