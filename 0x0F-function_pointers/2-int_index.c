#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: the array.
 * @size: size of the array.
 * @cmp: pointer to the function.
 * Return: int.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL || size <= 0)
		return (-1);

	i = 0;
	while (i < size)
		if (cmp[i] != 0)
			return (cmp[i]);

	return (-1);
}
