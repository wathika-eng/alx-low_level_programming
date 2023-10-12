#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - start
 * @h: start of node
 * Return: nodes
**/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t n;

	n = 0;
	while (ptr && ptr->prev)
		ptr = ptr->prev;
	while (ptr)
	{
		printf("%i\n", ptr->n);
		n++;
		ptr = ptr->next;

	}
	return (n);
}
