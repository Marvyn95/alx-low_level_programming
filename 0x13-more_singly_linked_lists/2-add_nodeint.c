#include  "lists.h"

/**
 * add_nodeint - adds node at the beginning of the list
 * @head: pointer to the first node
 * @n: data in the new node
 * Return: NULL or address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
