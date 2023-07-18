#include "main.h"

/**
  *print_alphabet - start
  *description - alphabets printed
  *Return: Always 0
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
