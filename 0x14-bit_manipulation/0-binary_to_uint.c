#include "main.h"

/**
  * binary_to_uint - start
  * @b: string
  * Return: int (conv) else 0
*/
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int c;

	c = 0;
	if (!c)
	{
		return (0);
	}
	for (a = 0; b[a]; a++)
	{
		if (b[a] > '1' || b[a] < '0')
		{
			return (0);
		}
		c = c * 2 + (b[a] - '0');
	}
	return (c); /** converts a binary number to an unsigned int */
}
