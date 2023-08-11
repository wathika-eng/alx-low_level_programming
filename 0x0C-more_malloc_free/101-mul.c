#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#define error "Error"

/**
  * is_digit - start
  * @s: string to check
  * Return: 1 if digit else 0
 */

int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
		{
			return (0);
		}
		a++;
	}
	return (1);
}

/**
  * _strlen - start
  * @s: check len
  * Return: len
 */

int _strlen(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	return (b);
}

/**
  * errors - start
  * Return: nothing
 */

void errors(void)
{
	printf("Error is \n");
	exit(98);
}

/**
  * main - start
  * @argc: arguments to pass
  * @argv: arguments array
  * Return: 0
 */

int main(int argc, char *argv[])
{
	char *c, *d;
	int e, f, g, h, j, k, l, m = 0;
	int *sum;

	c = argv[1], d = argv[2];
	if (argc != 3 || !is_digit(c) || !is_digit(d))
	{
		errors();
	}
	e = _strlen(c);
	f = _strlen(d);
	g = e + f + 1;
	sum = malloc(sizeof(int) * g);
	if (!sum)
		return (1);
	for (h = 0; h < e + f; h++)
		sum[h] = 0;
	for (e = e - 1; e >= 0; e--)
		k = c[e] - '0';
		j = 0;
		for (f = _strlen(d) - 1; f >= 0; f--)
		{
			l = d[f] - '0';
			j += sum[e + f + 1] + (k + l);
			sum[e + f + 1] = j % 10;
			j /= 10;
		}
		if (j > 0)
		{
			sum[e + f + 1] += j;
		}
	if (!m)
		printf("0");
	free(sum);
	printf("\n");
	return (0);
}
