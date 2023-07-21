#include "main.h"

/**
  * print_numbers - start
  * descriprion: print 0-9
  * Return: 0 (Success)
 */
void print_numbers(void)
{
	int a;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
