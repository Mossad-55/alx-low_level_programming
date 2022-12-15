#include "main.h"

/**
 * print_triangle -  draws a triangle on the terminal.
 * @size: int as a param.
 * Return: void.
 */
void print_triangle(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = size; j >= 1; j--)
		{
			if (i < j)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
