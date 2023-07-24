#include "main.h"

/**
 * print_rev - start
 * @s: reverse string
 * return: 0
 */
void print_rev(char *s)
{
	int a, b;

	a = 0;
	while (*s != '\0')
	{
		a++;
		s++;
	}
	s--;
	for (b = a; b > 0; b--)
	{
		_putchar('\n');
		b--;
	}
	_putchar('\n');
}

