#include "main.h"

/**
 * print_rev - reverse a string.
 * @s: pointer points to a str.
 * Allowed function: _putchar().
 * Return: void.
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	while (i--)
		_putchar(s[i])

	_putchar('\n');
}
