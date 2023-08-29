#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - start
  * @head: list
  * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *b;

	for (; head;)
	{
		b = head->next;
		free(head);
		head = b;
	}
}
