#include "lists.h"

/**
 * pop_listint - pops the first node and returns its value.
 * @head: linked list.
 *
 * Return: node value (int).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if (head == NULL || *head == NULL)
		return (0);

	temp = (*head)->next;
	val = (*head)->n;

	free(*head);

	*head = temp;
	return (val);
}
