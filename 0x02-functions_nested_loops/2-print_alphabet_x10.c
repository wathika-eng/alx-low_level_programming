#include "main.h"

/**
  *print_alphabet_x10 - start
  *description - prints alphabets 10 times on a newline
  *Return: 0 Always
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char a;

	while (i < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}

