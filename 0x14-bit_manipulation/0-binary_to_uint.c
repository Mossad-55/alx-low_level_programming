#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int.
 * @b: string
 *
 * Return: usnsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number, pow;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	len--;
	for (pow = 1, number = 0; len >= 0; pow *= 2)
	{
		if (b[len] == '1')
			number += pow;
		len--;
	}

	return (number);
}
