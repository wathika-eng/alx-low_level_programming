#include "main.h"

/**
  * more_numbers -start
  * description: print 0-14 10times
  * Return: void
 */

void more_numbers(void)
{
	int a = 0;
	int b;

	while (a < 10)
	{
		b = 0;

		while (b <= 14)
		{
			if (b >= 9)
			{
				_putchar('1');
			}
			_putchar(b % 10 + '0');
			b++;
		}
		a++;
		_putchar('\n');
	}
}
