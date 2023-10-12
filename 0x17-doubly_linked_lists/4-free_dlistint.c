#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - start
 * @head: struct
 * Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *start;
	dlistint_t *check;

	start = head;
	while (start != NULL)
	{
		check = start->next;
		free(start);
		start = check;
	}
}
