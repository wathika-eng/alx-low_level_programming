#include "lists.h"

/**
  * listint_len - start
  * @h:list
  * Return: 0 success
*/
size_t listint_len(const listint_t *h)
{
	size_t a;

	a = 0;
	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
