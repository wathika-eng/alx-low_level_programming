#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - Entry point
  * description - prints all alphabets except e and q
  * Return: 0
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		a += 1;

		switch (a)
		{
		case 'e':
			continue;
		case 'q':
			continue;
		case '{':
			continue;
		default:
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
