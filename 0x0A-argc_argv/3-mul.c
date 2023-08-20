#include "main.h"
#include <stdio.h>

/**
  * _atoi - start
  * @s: string to check
  * Return: int converted
 */

int _atoi(char *s)
{
	int a, b, c, d, e, f;

	a = 0;
	b = a;
	c = a;
	d = a;
	e = a;
	f = a;
	while (s[d] != '\0')
	{
		d++;
	}
	while (a < d && e == 0)
	{
		if (s[a] == '-')
		{
			++b;
		}
		if (s[a] >= '0' && s[a] <= '9')
		{
			f = s[a] - '0';
			if (b % 2)
			{
				f = -f;
			}
			c = c * 10 + f;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '0')
			{
				break;
			}
			e = 0;
		}
		a++;
	}
	if (e == 0)
	{
		return (0);
	}
	return (c);
}

/**
  * main - start
  * @argc: arguments
  * @argv: array
  * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	z = x * y;
	printf("%d\n", z);
	return (0);
}
