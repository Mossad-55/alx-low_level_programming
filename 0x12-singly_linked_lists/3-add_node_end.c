#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node_end - adds a node in the back of a linked list.
 * @head: double pointer to the list.
 * @str: string.
 *
 * Return: list_t* (new address of the list).
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new;
	list_t *temp = *head;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
