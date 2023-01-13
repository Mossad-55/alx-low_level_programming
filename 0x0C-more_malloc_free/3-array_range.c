#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers.
 * @min: int.
 * @max: int.
 * Return: a pointer or NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		arr[i++] = min;
		min++;
	}

	return (arr);
}
