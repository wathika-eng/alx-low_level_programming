#include "hash_tables.h"

/**
 * hash_djb2 - start\
 * * @str: The string to hash.
 * Return: calc hash.
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int cc;

	hash = 5381;
	while ((cc = *str++))
	{
		hash = ((hash << 5) + hash) + cc;
	}
	return (hash);
}
