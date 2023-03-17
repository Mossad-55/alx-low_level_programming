#include "lists.h"

/**
 * *add_dnodeint_end - adds a node at the end of the list.
 * @head: pointer to head of list.
 * @n: value of the node.
 * Return: head of the list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_head, *temp;

	new_head = malloc(sizeof(dlistint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = NULL;
	while (temp->next == NULL)
		temp = temp->next;

	new_head->prev = temp;
	temp->next = new_head;

	return (new_head);
}
