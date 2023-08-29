#include "lists.h"

/**
  * delete_nodeint_at_index - start
  * @head: 1st
  * @index: node to del
  * Return: 1 success else -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *b = *head;
	unsigned int a;
	listint_t *now = NULL;

	a = 0;
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(b);
		return (1);
	}
	while (a < index - 1)
	{
		if (!(b->next))
		{
			if (!b)
			{
				return (-1);
			}
		}
		b = b->next;
		a++;
	}
	now = b->next;
	b->next = now->next;
	free(now);
	return (1);
}
