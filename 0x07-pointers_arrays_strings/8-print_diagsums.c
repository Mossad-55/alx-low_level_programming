#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagnols
 * @a: 2d array (first param).
 * @size: int (second param).
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, first, second;

	first = second = 0;
	for (i = 0; i < size; i++)
	{
		first += *(a + (size * i + i));
		second += *(a + (size * i + size - 1 - i));
	}

	printf("%d, ", first);
	printf("%d\n", second);
}
