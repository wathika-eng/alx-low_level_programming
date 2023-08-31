 #include "main.h"
#define a 1
/**
  * clear_bit - start
  * @n: %lu
  * @index: where?
  * Return: 1 if worked else -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-01);
	}
	*n = (~(1UL << index) & *n);
	return (a);
}
