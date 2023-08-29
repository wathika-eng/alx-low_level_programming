#include "lists.h"

/**
  * find_listint_loop - start
  * @head: begin
  * Return: where loop begins
*/

listint_t *find_listint_loop(listint_t *head)
{
	/** declared in the for loop */

	if (!head)
	{
		return (NULL);
	}
	for (; head; head = head->next)
	{
		listint_t *x = head;
		listint_t *y = x;
		/** skip a line */

		while (x && y && y->next)
		{
			y = y->next->next;
			x = x->next;
			if (y == x)
			{
				x = y;
				while (x != y)
				{
					x = x->next;
					y = y->next;
				}
				return (y);
			}
		}
	}
	return (NULL);
}
