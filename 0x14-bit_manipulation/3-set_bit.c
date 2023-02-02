#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at an index.
 * @n: pointer to a number.
 * @index: index.
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pow;

	if (index > 64)
		return (-1);

	pow = 1;
	while (index > 0)
	{
		pow *= 2;
		index--;
	}
	*n += pow;

	return (1);
}
