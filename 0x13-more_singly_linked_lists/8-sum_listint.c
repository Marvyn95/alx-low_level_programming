#include "lists.h"

/**
 * sum_listint - computes summ of all data in a list
 * @head: pointer to the head node
 * Return: 0 or SUM
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
