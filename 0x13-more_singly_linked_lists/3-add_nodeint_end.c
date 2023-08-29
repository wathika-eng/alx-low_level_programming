#include "lists.h"

/**
  * add_nodeint_end - start
  * @head: start
  * @n: new
  * Return: 0
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a;
	listint_t *b = *head;

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
	} else if (*head != NULL)
	{
		while (b->next)
		{
			b = b->next;
		}
		b->next = a;
	}
	return (a);
}
