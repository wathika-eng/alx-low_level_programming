#include <stdio.h>
#include "lists.h"

/**
  * free_listint_safe - freedom
  * @h:ptr
  * Return: int
*/
size_t free_listint_safe(listint_t **h)
{
	int a;
	size_t b;
	listint_t *c;

	b = 0;
	if (!*h)
	{
		if (!h)
		{
			return (0);
		}
	}
	for (; *h;)
	{
		a = (*h)->n - ((*h)->next ? (*h)->next->n : 0);
		if (a > 0)
		{
			c = (*h)->next;
			*h = c;
			b++;
		} else
		{
			free(*h);
			*h = NULL;
			b++;
			break;
		}
	}
	return (b);
}
