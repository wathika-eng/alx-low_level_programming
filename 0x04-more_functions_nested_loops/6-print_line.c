#include "main.h"

/**
  * print_line - start
  * @n: draw a straight line
  * Return: void
 */

void print_line(int n)
{
	int line, uds, b;
	char a;

	for (line = 0; line < n; line++)
	{
		for (b = 0; b < 1; b++)
		{
			a = '_';
			for (uds = 0; uds < 1; uds++)
			{
				_putchar(a);
			}
		}
	}
	_putchar('\n');
}
