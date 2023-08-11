#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * check_num - start
  * @str: string
  * Return: 0
 */

int check_num(char *str)
{
	unsigned int a = 0;

	while (a < strlen(str))
	{
		if (!isdigit(str[a]))
		{
			return (0);
		}
		a++;
	}
	return (1);
}

/**
  * main - start
  * @argc: arguments
  * @argv: array
  * Return: 0
 */

int main(int argc, char *argv[])
{
	int b, str_to_int;
	int c = 0;

	b = 1;
	while (b < argc)
	{
		if (check_num(argv[b]))
		{
			str_to_int = atoi(argv[b]);
			c += str_to_int;
		} else
		{
			printf("Error is: \n");
			return (1);
		}
		b++;
	}
	printf("%d\n", c);
	return (0);
}
