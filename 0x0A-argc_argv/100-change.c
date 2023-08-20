#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
  * main - start
  * @argc: arguments to pass
  * @argv: params
  * Return: 0 success else 1
*/

int main(int argc, char *argv[])
{
	int a, b, sum;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	sum = 0;
	if (a < 0)
	{
		printf("0\n");
		return (0);
	}
	for (b = 0; b < 5 && a >= 0; b++)
	{
		while (a >= coins[b])
		{
			sum++;
			a -= coins[b];
		}
	}
	printf("%d\n", sum);
	return (0);
}
