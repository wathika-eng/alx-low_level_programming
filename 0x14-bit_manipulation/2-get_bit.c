#include "main.h"

/**
  * get_bit - start
  * @n: look
  * @index: where
  * Return: value else -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	if (index > 63)
	{
		return (-1);
	}
	a = (n >> index) & 1;
	return (a);
}
