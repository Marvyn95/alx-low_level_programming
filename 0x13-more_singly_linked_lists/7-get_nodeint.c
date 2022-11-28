#include "lists.h"

/**
 * get_nodeint_at_index - locates nth node in a list
 * @head: pointer to the head node
 * @index: index of the node to locate
 * Return: NULL or pointer to the node searched for
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
