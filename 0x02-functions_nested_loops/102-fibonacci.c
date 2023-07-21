#include <stdio.h>

/**
  * main - start
  * description - fibonacci seq.
  * Return: 0
 */

int main(void)
{
	int a = 50;
	int b;
	unsigned long first = 1, second = 2, next;

	printf("%lu, %lu", first, second);
	for (b = 2; b < a; b++)
	{
		next = first + second;
		printf(", %lu", next);
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
