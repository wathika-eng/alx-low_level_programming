#include "main.h"

int self_sqrt_recursion(int n, int i);

/**
  *_sqrt_recursion - start
  * @n: the number
  * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (self_sqrt_recursion(n, 0));
}

/**
  * self_sqrt_recursion - find the natural sqrt
  * @n: number
  * @i: repeat
  * Return: sqrt
 */

int self_sqrt_recursion(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	} else if (i * i > n)
	{
		return (-1);
	}
	return (self_sqrt_recursion(n, i + 1));
}
