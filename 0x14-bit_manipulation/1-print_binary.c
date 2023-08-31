#include "main.h"

/**
  * print_binary - start
  * @n: unsigned long int
  * Return: nothing
*/

void print_binary(unsigned long int n)
{
	int a, b;
	unsigned long int tobeconv;

	a = 0;
	b = a;
	for (a = 63; a >= 0; a--)
	{
		tobeconv = n >> 1;
		if (tobeconv & 1)
		{
			_putchar('1');
			b++;
		} else if (b)
		{
			_putchar('0');
		}
	}
	if (!b)
	{
		_putchar('0');
	}
}
