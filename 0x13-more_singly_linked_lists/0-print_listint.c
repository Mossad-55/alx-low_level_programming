#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list.
 * @h: linked list.
 *
 * Return: number of nodes that got printed.
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}
