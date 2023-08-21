#include "stdio.h"
#include <stdlib.h>

/**
  * main - start
  * @argc: arguments
  * @argv: array
  * Return: 0 success else 1 || 2
*/

int main(int argc, char *argv[])
{
	int a, b;
	unsigned char *r;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	r = (unsigned char *)main;
	for (b = 0; b < a; b++)
	{
		if (b == a - 1)
		{
			printf("%0x ", r[b]);
			break;
		}
		printf("%0x ", r[b]);
	}
	printf("\n");
	return (0);
}
