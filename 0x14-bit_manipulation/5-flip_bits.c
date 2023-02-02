#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert a number.
 * @n: first number.
 * @m: second number.
 * Return: unsigned int.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif;
	int c = 0;

	dif = n ^ m;

	while (dif)
	{
		c++;
		dif &= (dif - 1);
	}

	return (c);
}
