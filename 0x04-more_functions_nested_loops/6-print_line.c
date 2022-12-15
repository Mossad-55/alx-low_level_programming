#include "main.h"

/**
 * print_line -  prints a straight line of (-).
 * @n: int as a param.
 * Return: void.
 */
void print_line(int n)
{
	int i;
	char c;

	c = '_';
	for (i = 0; i < n; i++)
		_putchar(c);
	_putchar('\n');
}
