#include "main.h"

int check_pali(char *s, int a, int len);
int _strlen_recursion(char *s);

/**
  * is_palindrome - start
  * @s: string to check
  * Return: 1 if true else 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pali(s, 0, _strlen_recursion(s)));
}

/**
  * _strlen_recursion - length of *s
  * @s: check len
  * Return: len
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
  * check_pali - recurces
  * @s: check
  * @a: iretarate
  * @len: len of *s
  * Return: 1 else 0
 */

int check_pali(char *s, int a, int len)
{
	if (*(s + a) != *(s + len - 1))
	{
		return (0);
	}
	if (a >= len)
	{
		return (1);
	}
	return (check_pali(s, a + 1, len - 1));
}
