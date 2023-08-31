#include "main.h"
/** #define x 63 */

/**
  * flip_bits - start
  * @n: int
  * @m: %lu
  * Return: no. of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	int a, b;
	unsigned long int e;

	a = 0;
	b = 0;
	e = n ^ m;
	for (a = 63; a >= 0; a--)
	{
		d = e >> a;
		if (d & 1)
		{
			b++;
		}
	}
	return (b);
}
