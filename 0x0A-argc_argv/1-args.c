#include <stdio.h>
#include "main.h"

/**
  * _putchar - start
  * @c: char to print
  * Return: 1 else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
