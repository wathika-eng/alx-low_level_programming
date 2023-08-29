#include "lists.h"

/**
  * insert_nodeint_at_index - start
  * @head: 1st node
  * @idx: where to add new node
  * @n: what to add
  * Return: new address else NULL or nil
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a;
	listint_t *b = *head;
	unsigned int c;

	c = 0;
	a = malloc(sizeof(listint_t));
	if (!a)
	{
		if (!head)
		{
			return (NULL);
		}
	}
	a->n = n;
	a->next = NULL;
	if (idx == 0)
	{
		a->next = *head;
		*head = a;
		return (a);
	}
	while (b)
	{
		if (c == idx - 1)
		{
			a->next = b->next;
			b->next = a;
			return (a);
		}
		else
		{
			b = b->next;
		}
	}
	free(a);
	return (NULL);
}
