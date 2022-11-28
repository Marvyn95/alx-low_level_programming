#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to address of the first node
 * Return: pointer tofirst node of the reversed string
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return ();

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;
	return (*head);

}
