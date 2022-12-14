#include "lists.h"

/**
 * list_len - finds number of elements in a linked list
 * @h: pointer to head of the list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
