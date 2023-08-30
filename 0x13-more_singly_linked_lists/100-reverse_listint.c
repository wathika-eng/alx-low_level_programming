#include "lists.h"

/**
  * reverse_listint - start
  * @head: 1st
  * Return: ptr
*/
listint_t *reverse_listint(listint_t **head)
{
	/** listint_t *now = *head; */
	listint_t *mbele = NULL;
	listint_t *nyuma = NULL;

	for (; *head;)
	{
		mbele = (*head)->next;
		(*head)->next = nyuma;
		nyuma = *head;
		*head = mbele;
	}
	*head = nyuma;
	return (*head);
}
