#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at an index
 * @head: pointer to the address of the first node
 * @idx: index to place new node
 * @n: integer to add in new node
 * Return: NULL or address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *cpy;
	unsigned int node;

	cpy = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = cpy;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (cpy == NULL || cpy->next == NULL)
			return (NULL);

		cpy = cpy->next;
	}

	new->next = cpy->next;
	cpy->next = new;

	return (new);
}
