#include <stdio.h>

/**
 * main - Start of the program
 * description - A combination of numbers
 * Return: Always 0 (success)
*/

int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (a == 8 && b == 9)
			{
				putchar('\n');
			} else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
