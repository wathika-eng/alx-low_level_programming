#include "lists.h"
#include <stdio.h>

/**
  * print_listint - start
  * @h: list
  * Return: 0 success
*/
size_t print_listint(const listint_t *h)
{
	size_t a;

	a = 0;
	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		a++;
	}
	return (a);
}
