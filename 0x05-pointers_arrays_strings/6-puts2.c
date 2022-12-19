#include "main.h"

/**
 * puts2 - prints every other charachter of a string.
 * @str: pointer points to a str.
 * Allowed function: _putchar().
 * Return: void.
 */
void puts2(char *str)
{
	int i;

	i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
