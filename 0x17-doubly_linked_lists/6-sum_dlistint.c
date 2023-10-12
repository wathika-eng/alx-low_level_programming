#include "lists.h"

/**
 * sum_dlistint - start
 * @head: struct
 * Return: int
*/

int sum_dlistint(dlistint_t *head)
{
	int add;
	
	add = 0;
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
