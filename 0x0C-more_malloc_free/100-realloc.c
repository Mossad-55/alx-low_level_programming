#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block.
 * @ptr: pointer.
 * @old_size: size of the old pointer.
 * @new_size: size of the new allocated pointer.
 *
 * Return: pointer or NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = ptr[i];
	}
	else
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = ptr[i];
	}

	free(ptr);
	return (new_ptr);
}
