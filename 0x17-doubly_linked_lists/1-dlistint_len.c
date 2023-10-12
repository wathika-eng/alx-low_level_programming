#include "lists.h"

/**
 * dlistint_len - start
 * @h: struct
 * Return: len
**/

size_t dlistint_len(const dlistint_t *h)
{
	size_t len;
	int x;

	len = 0;
	for (x = 0; h; x++)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
