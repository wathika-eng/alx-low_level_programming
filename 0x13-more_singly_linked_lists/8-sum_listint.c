#include "lists.h"

/**
  * sum_listint - start
  * @head: list
  * Return: 0 success
*/
int sum_listint(listint_t *head)
{
	listint_t *b;
	int a;

	a = 0;
	for (b = head; b; b = b->next)
	{
		a += b->n;
	}
	return (a);
}
