#include "lists.h"

/**
 * dlistint_len - function that counts nodes of a list
 * @h: pointer to the first node
 * Return: returns number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes = nodes + 1;
		h = h->next;
	}
	return (nodes);
}
