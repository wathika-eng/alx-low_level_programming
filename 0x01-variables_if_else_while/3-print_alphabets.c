#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * description - prints all alphabets in small and caps
  * Return: 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z';)
	{
		putchar(a);
		a += 1;
	}
	for (a = 'A'; a <= 'Z';)
	{
		putchar(a);
		a += 1;
	}
	putchar('\n');
	return (0);
}
