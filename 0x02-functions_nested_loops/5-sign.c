#include "main.h"

/**
  *print_sign - start
  * @n: check if grater or less than zero
  * Return: 1 if greater is zero, -1 if less than zero and 0 if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	{
		_putchar('-');
		return (-1);
	}
}
