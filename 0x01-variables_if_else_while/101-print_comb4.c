#include <stdio.h>

/**
  *main - start
  *Description - Print numbers combinations
  *Return: 0 (Success)
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				if (a != b && a != c && b != c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
				if (a == 7 && b == 8 && c == 9)
				{
					putchar('\n');
				} else
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	return (0);
}
