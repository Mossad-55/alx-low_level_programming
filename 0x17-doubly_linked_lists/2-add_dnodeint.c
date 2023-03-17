#include "lists.h"

/**
 * *add_dnodeint - adds a node at the beginning of the list.
 * @head: pointer to head of list.
 * @n: value of the node.
 * Return: head of the list.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head;

	new_head = malloc(sizeof(dlistint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->prev = NULL;
	new_head->next = *head;

	return (new_head);
}
