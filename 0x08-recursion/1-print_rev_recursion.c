#include "main.h"

/**
  *_print_rev_recursion - start
  * @s: printed in reverse
  * Return: null
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
