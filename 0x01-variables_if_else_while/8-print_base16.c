#include <stdio.h>

/**
  *main - Start of the program
  *Description - Prints numbers and letters
  * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;
	char b = 'a';

	while (a <= 9)
	{
		putchar (a + '0');
		a++;
	}
	while (b < 'g')
	{
		putchar (b);
		b++;
	}
	putchar ('\n');

	return (0);
}
