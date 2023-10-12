#include "lists.h"

/**
 * get_dnodeint_at_index - start
 * @head: struct
 * @index: n
 * Return: ptr or index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index && head->next; x++)
	{
		head = head->next;
	}
	if (x < index)
		return (NULL);
	return (head);
}
