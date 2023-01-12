#include "lists.h"

/**
 * print_dlistint - prints elements of a doubly linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	dlistint_t *p = h;

	while (p != NULL)
	{
		nodes = nodes + 1;
		printf("%d\n", p->n);
		p = p->next;
	}
	return (nodes);
}
