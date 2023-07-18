#include "main.h"

/**
  * _isalpha - start
  * @c: check character
  * Return: 1 if c is a letter else 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'b') || (c >= 'A' && c <= 'Z'));
}
