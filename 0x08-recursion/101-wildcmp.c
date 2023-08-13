#include "main.h"

/**
  * wildcmp - start
  * @s1: first string
  * @s2: second
  * Return: 1 if similar else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '*' && s2 != '\0')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
