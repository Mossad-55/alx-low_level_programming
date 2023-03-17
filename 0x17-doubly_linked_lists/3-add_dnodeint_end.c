#include "lists.h"

/**
 * *add_dnodeint_end - adds a node at the end of the list.
 * @head: pointer to head of list.
 * @n: value of the node.
 * Return: head of the list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *curr = *head;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (curr->next != NULL)
		curr = curr->next;

	curr->next = temp;
	temp->prev = curr;
	return (temp);
}
