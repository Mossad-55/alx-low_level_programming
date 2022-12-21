#include "main.h"

/**
 * reverse_array - reverses an array of integers.
 * @a: array of integers(first param).
 * @n: number of elements (second param).
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
