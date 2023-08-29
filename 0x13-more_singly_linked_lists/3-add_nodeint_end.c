#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint_end - start
  * @head: start
  * @n: new
  * Return: 0
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *b = *head;
	listint_t *a;

	a = malloc(sizeof(listint_t));
	if (!a)
	{
		return (NULL);
	}
	a->n = n;
	a->next = NULL; /**end*/
	if (*head == NULL)
	{
		*head = a;
		return (a);
	}
	while (b->next)
	{
		b = b->next;
	}
	return (a);
}
