#include "main.h"
#include <stdlib.h>

/**
  * argstostr - start
  * @i: int
  * @arv: arr
  * Return: ptr
*/

char *argstostr(int i, char **arv)
{
	int a, b, c, d;
	char *s;

	if (i == 0)
	{
		if (arv == NULL)
		{
			return (NULL);
		}
	}
	for (a = 0; a < i; a++)
	{
		for (b = 0; arv[a][b]; b++)
		{
			d++;
		}
	}
	d += i;
	s = malloc(sizeof(char) * d + 1);
	if (s == NULL)
		return (NULL);
	for (a = 0; a< i; a++)
	{
		for (b = 0; arv[a][b]; b++)
		{
			s[c] = arv[a][b];
			c++;
		}
		if (s[c] == '\0')
			s[c++] = '\n';
	}
	return (s);
}

