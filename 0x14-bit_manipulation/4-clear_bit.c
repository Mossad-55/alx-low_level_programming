#include "main.h"

/**
 * clear_bit - sets a value of a bit to 0.
 * @n: pointer to a number.
 * @index: index.
 *
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int h;

	if (index > 64)
		return (-1);

	h = index;
	i = 1;
	while (h > 0)
	{
		i *= 2;
		h--;
	};
	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
