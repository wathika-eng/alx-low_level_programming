#include "main.h"

/**
  *_puts_recursion - start
  * @s: string
  * Return: Null
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
