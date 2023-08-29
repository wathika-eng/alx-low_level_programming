#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - start
  * @head: list
  * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *a;

	for (; head;)
	{
		a = head->next;
		free(a);
		head = a;
	}
}
