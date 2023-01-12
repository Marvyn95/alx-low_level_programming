#include "lists.h"

/**
 * get_dnodeint_at_index - locates anode at index n of a linked list
 * @head: head of the list
 * @index: position of thenode
 * Return: NULL or pointer to the searched for node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		i = i + 1;
	}

	return (head);
}
