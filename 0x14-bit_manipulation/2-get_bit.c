#include "main.h"
#include <stdio.h>

/**
 * get_bit- get the value of the bit at specific index.
 * @n: number
 * @index: index of the bit.
 *
 * Return: int.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int h;

	if (index > 64)
		return (-1);
	h = n >> index;

	return (hold & 1);
}
