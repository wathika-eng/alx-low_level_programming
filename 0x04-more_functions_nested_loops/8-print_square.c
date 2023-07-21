#include "main.h"

/**
 * print_square - start
 * @size: draw a square
 * Return: void
 */

void print_square(int size)
{
	int line, hash, b;
	char a;

	for (line = 0; line < size; line++)
	{
		for (b = 0; b < 1; b++)
		{
			a = '#';
			for (hash = 0; hash < size; hash++)
			{
				_putchar(a);
			}
			_putchar('\n');
		}
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
