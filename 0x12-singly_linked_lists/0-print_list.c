#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  * print_list - start
  * @h: list
  * Return: elements
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h->str == NULL)
	{
		printf("[0] (nil)\n");
		break;
	}
	for (count = 0; h != NULL; count++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
