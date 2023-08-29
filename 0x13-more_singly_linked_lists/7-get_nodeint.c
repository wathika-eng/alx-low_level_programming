#include "lists.h"

/**
  * get_nodeint_at_index - start
  * @head: 1st node
  * @index: position of node
  * Return: nth node else null
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *b = head;
	unsigned int a;

	for (a = 0; b && a < index; a++)
	{
		b = b->next;
	}
	if (a == index && b)
	{
		return (b);
	}
	else
	{
		return (NULL);
	}
}
