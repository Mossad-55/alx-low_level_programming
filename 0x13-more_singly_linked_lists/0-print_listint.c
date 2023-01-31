#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list.
 * @h: linked list.
 *
 * Return: number of nodes that got printed.
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
