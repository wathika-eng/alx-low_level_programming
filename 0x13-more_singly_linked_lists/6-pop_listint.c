/** #include <stdlib.h> */
#include "lists.h"

/**
  * pop_listint - start
  * @head: first node
  * Return: data (n) else 0 if empty
*/

int pop_listint(listint_t **head)
{
	int a;
	listint_t *b;

	if (!*head)
	{
		if (!head)
		{
			return (0);
		}
	}
	a = (*head)->n;
	b = (*head)->next;
	free(*head);
	*head = b;
	return (a);
}
