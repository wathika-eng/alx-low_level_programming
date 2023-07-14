#include <stdio.h>

/**
 * main - start
 * Description - prints numbers less than 10
 * Return: 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10;)
	{
		printf("%d", a);
		a++;
	}
	return (0);
}
