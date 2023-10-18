#include "main.h"

/**
  * _puts - start
  * @str: prints to stdout
  * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
