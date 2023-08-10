#include "main.h"
#include <stdlib.h>

/**
  *string_nconcat - start
  * @s1: char
  * @s2: char
  * @n: ptr
  * Return: ptr else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a, b, c, d;

	a = 0;
	b = c;
	c = d;
	while (s1 && s1[c])
	{
		c++;
	}
	while (s2 && s2[d])
	{
		d++;
	}
	if (n < d)
	{
		s = malloc(sizeof(char) * (c + n + 1));
	} else
	{
		s = malloc(sizeof(char) * (c + d + 1));
	}
	if (!s)
	{
		return (NULL);
	}
	while (a < c)
	{
		s[a] = s1[a];
		a++;
	}
	if (n >= d && a < (c + d))
	{
		s[a++] = s2[a++];
	}
	s[a] = '\0';
	return (s);
}
