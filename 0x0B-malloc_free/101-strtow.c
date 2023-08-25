#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * coutw - start
  * @s: string to check
  * Return: int
*/

int coutw(char *s)
{
	int a, b, c;

	a = 0;
	b = a;
	c = a;
	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		if (a == 0)
		{
			a = 1;
			c++;
		}
	}
	return (c);
}
/**
  * **strow - splitter
  * @str: string
  * Return: mem address
*/

char **strow(char *str)
{
	char **s, *t;
	int u, uu, v, w, x, a, b;

	while (*(str + uu))
	{
		uu++;
	}
	w = coutw(str);
	if (w == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (w + 1));
	if (s == NULL)
		return (NULL);
	for (u = 0; u < uu; u++)
	{
		if (str[u] == ' ' || str[u] == '\0')
		{
			if (x)
			{
				b = u;
				t = malloc(sizeof(char *) * (x + 1));
				if (t == NULL)
					return (NULL);
				while (a < b)
				{
					*t++ = str[a++];
				}
				*t = '\0';
				s[v] = t - x;
				v++;
				x = 0;
			}
		}
		if (x++ == 0)
			a = u;
	}
	s[v] = NULL;
	return (s);
}
