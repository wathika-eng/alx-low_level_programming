#include <stdio.h>

/**
  * main - start
  * description: prints where the program was compiled from
  * Return: 0 success
*/

int main(void)
{
	char *s;

	printf("%s\n"__FILE__);
	return (0);
}
