#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: adress of the first node
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
