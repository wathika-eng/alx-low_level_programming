#include <stdio.h>

/**
  * main - start
  * description - mulriples of 3 and 5
  * Return: 0
 */

int main(void)
{
	long int suma, sumb, sumc;
	int a;

	suma = 0;
	sumb = 0;
	sumc = 0;
	for (a = 0; a < 1024; ++a)
	{
		if ((a % 3) == 0)
		{
			suma = suma + a;
		} else if ((a % 5) == 0)
		{
			sumb = sumb + a;
		}
	}
	sumc = suma + sumb;
	printf("%lu\n", sumc);
	return (0);
}
