#include "lists.h"
#include <stdio.h>

size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);

/**
  * looped_listint_len - start count
  * @head: ptr
  * Return: 0
*/

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *x, *y;
	size_t n = 1;

	if (head == NULL)
	{
		if (head->next == NULL)
		{
			return (0);
		}
	}
	x = head->next;
	y = (head->next)->next;
	while (y)
	{
		if (x == y)
		{
			x = head;
			while (x != y)
			{
				n++;
				x = x->next;
				y = y->next;
			}
			x = x->next;
			while (x != y)
			{
				n++;
				x = x->next;
			}
			return (n);
		}
		x = x->next;
		y = (y->next)->next;
	}
	return (0);
}

/**
  * print_listint_safe - start
  * @head: node
  * Return: 0
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t ne, a;

	ne = looped_listint_len(head);
	a = 0;
	if (ne == 0)
	{
		for (; head != NULL; ne++)
		{
			printf("[%p] %d\n", (void *)head, head->n); /** ptr */
			head = head->next;
		}
	} else
	{
		for (a = 0; a < ne; a++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p} %d\n", (void *)head, head->n);
	}
	return (ne);
}
