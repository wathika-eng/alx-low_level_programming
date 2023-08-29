#include "lists.h"

/**
  * reverse_listint - start
  * @head: 1st
  * Return: ptr
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *now = *head;
	listint_t *mbele = NULL;
	listint_t *nyuma = NULL;

	for (; now;)
	{
		mbele = now->next;
		now->next = nyuma;
		nyuma = now;
		now = mbele;
	}
	*head = nyuma;
	return (*head);
}
