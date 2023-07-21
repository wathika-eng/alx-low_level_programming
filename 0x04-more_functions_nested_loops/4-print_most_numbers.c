#include "main.h"

/**
  * print_most_numbers - start
  * description: numbers except 2 and 4
  * Return: nothing
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9' ; c++)
	{
		switch (c)
		{
			case '2':
				break;
			case '4':
				break;
			default:
				_putchar(c);
		}
	}
	_putchar('\n');
}
