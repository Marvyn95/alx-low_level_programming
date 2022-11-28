#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer to the first node
 * Return: number of nodes in total
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
