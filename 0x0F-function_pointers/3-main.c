#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
#include "function_pointers.h"

/**
  * main - start
  * @argc: args
  * @argv: array
  * Return: 0 success
*/

int main(int __attribute((__unused__)) argc, char *argv[])
{
	int i, j;
	char *op;

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	op = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(1);
	}
	if ((*op == '/' && j == 0) || (*op == '%' && j == 0))
	{
		printf("Error\n");
		exit(2);
	}
	printf("%d\n", get_op_func(op)(i, j));
	return (0);
}
