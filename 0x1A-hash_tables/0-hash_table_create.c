#include "hash_tables.h"

/**
 * hash_table_create - start
 * @size: the size of the array
 * Return: a ptr else NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int fnode;

	if (size == 0)
	{
		return (NULL);
	}

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->size = size;

	for (fnode = 0; fnode < size; fnode++)
	{
		hash_table->array[fnode] = NULL;
	}

	return (hash_table);
    free(hash_table);
}