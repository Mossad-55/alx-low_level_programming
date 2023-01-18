#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of arr.
 * @array: the array.
 * @size: size of the array.
 * @action: pointer to the function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	i = 0;
	while (i < size)
		action(array[i++]);
}
