#include "lists.h"

/**
 * sum_dlistint - returns the sum of nodes in the list.
 * @head: pointer to the head of the list.
 * Return: int.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int sum = 0;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
