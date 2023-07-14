#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * description - prints all alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char z;

	for (z = 'z' ; z >= 'a';)
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
