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
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(1);
	}
	if ((*op == '/' && b == 0) || (*op == '%' && b == 0))
	{
		printf("Error\n");
		exit(2);
	}
	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
