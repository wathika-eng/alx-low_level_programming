#include "main.h"
#include <stdlib.h>

/**
  * *_strdup - start
  * @str: string as a parameter
  * Return: Null if str = NULL elsei
 */

char *_strdup(char *str)
{
	int a, b;
	char *c;

	a = 0;
	c = malloc(sizeof(char) * (a + 1));
	if (str == NULL || c == NULL)
	{
		return (NULL);
	}
	while (str[a] != '\0')
	{
		a++;
	}
	for (b = 0; str[b]; b++)
	{
		c[b] = str[b];
	}
	return (c);
}
