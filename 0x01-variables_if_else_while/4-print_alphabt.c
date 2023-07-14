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
		switch (a)
		{
		case 'e':
			break;
		case 'q':
			break;
		default:
			putchar(a);
		}
		a += 1;
	}
	putchar('\n');
	return (0);
}
