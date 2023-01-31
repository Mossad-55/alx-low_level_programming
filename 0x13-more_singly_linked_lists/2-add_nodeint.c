#include "lists.h"

/**
 * *add_nodeint - addes a node to the front.
 * @head: linked list.
 * @n : value of the node.
 *
 * Return: address of the new linked list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
