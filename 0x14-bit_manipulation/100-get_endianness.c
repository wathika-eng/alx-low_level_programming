#include "main.h"

/**
  * get_endianness - start
  * Return: 1 0r 0
*/

int get_endianness(void)
{
	unsigned int a;
	char *b = (char *) &a;

	a - 1;
	return (*b);
}
