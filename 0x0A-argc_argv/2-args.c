#include <stdio.h>
#include "main.h"

/**
  * main - start
  * @argc: arguments to pass
  * @argv: array
  * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
