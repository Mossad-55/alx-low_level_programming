#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - adds a node in front of a linked list.
 * @head: double pointer to the list.
 * @str: string.
 *
 * Return: list_t* (new address of the list).
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = (*head);

	return (*new);
}
