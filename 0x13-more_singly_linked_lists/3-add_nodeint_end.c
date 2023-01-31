#include "lists.h"

/**
 * *add_nodeint_end - addes a node to the end.
 * @head: linked list.
 * @n : value of the node.
 *
 * Return: address of the new created node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new_node;

	return (new_node);
}
