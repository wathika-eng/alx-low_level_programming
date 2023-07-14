#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * description - prints all alphabets
  * Return: 0
 */
int main(void)
{
	char a = 'a';

	for (a = 'a' ; a <= 'z';)
	{
		putchar(a);
		a += 1;
	}

	putchar('\n');
	return (0);
}
