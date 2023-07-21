#include "main.h"

/**
  * print_diagonal - start
  * @n: prints \ diagonally
  * Return: nothing
 */

void print_diagonal(int n)
{
	int a, c;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (a = 0; a < n; a++)
		{
			for (c = 0; c < n; c++)
			{
				if (a == c)
				{
					_putchar('\\');
				}
				else if (c < a)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
