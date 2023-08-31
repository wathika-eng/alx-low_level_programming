#include "main.h"

/**
  * get_endianness - start
  * Return: 1 0r 0
*/

int get_endianness(void)
{
	unsigned int a;

	a = 1;

	char *b = (char *) &a;


	return (*b);
}
