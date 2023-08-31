#include "main.h"

/**
  * get_endianness - start
  * Return: 1 0r 0
*/

int get_endianness(void)
{
	unsigned int a = 1;

	char b;
	char *p;
	p = &b;
	p = (char *) &a;

	return (*p);
}
