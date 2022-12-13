#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints the number to 98.
 * @n: a param of type int.
 * Return: int.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
			printf("%d, ", n);
	}
	else if (n > 98)
	{
		for (n = n; n >= 98; n--)
			printf("%d, ", n);
	}
	else
		printf("%d", 98);

	printf('\n');
}
