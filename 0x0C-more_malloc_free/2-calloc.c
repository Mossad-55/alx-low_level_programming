#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array.
 * @nmemb: num of elements.
 * @size: size in bytes.
 * Return: a pointer or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	char val = 0;


	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = val;

	return (ptr);
}
