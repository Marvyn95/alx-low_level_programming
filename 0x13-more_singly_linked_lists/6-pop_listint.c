#include "lists.h"

/**
 * pop_listint - deletes the head node of the linked list
 * @head: pointer to the address of the first node
 * Return: 0 or data contained in the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int r;

	if (*head == NULL)
		return (0);

	tmp = *head;
	r = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (r);
}
