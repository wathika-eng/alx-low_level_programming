#include "main.h"

/**
  *  _isdigit - start
  * @c: checks for a digit
  * Return: either 0 or 1
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
		return (0);
}
