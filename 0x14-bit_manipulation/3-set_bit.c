#include "main.h"
#define err -1
#define succ 1

/**
  * set_bit - start
  * @n: long int
  * @index: position
  * Return: 1 if okay else -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (err);
	}
	*n = ((1UL << index) | *n);
	return (succ);
}
