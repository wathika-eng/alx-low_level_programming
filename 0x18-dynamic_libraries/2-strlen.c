#include "main.h"

/**
  * _strlen - start
  * @s: length of a string
  * Return: strlen
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
