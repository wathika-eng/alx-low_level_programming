#include "main.h"

int prime(int n, int i);

/**
  *is_prime_number - start
  * @n: number to check
  * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}

/**
  * prime - recursive fn for prime numbers
  * @n: number to check
  * @i: repeats
  * Return: 1 if prime else 0
 */

int prime(int n, int i)
{
	if (i == 1 || i == 2)
	{
		return (1);
	} else if (n % i == 0)
	{
		return (0);
	}
	return (prime(n, i - 1));
}
