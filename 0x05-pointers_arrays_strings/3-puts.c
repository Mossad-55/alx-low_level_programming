#include "main.h"

/**
 * _puts -  prints a string to the stdout.
 * @str: pointer points to a str.
 * only allowed function: _putchar().
 * Return: int.
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		_putchar(s[i++]);
	_putchar('\n');
}
