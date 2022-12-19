#include "main.h"

/**
 * puts_half - prints the right half of a string.
 * @str: pointer points to a str.
 * Return: void.
 */
void puts_half(char *str)
{
	int len, half;

	len = 0;
	while (str[len] != '\0')
		len++;

	half = (len - 1) / 2;
	while (half < len)
		_putchar(str[half++]);
	_putchar('\n');
}
