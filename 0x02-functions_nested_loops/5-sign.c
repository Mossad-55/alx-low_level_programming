#include "main.h"

/**
 * print_sign -  returns (1 - 0) and prints (+, -, 0).
 * @n: it's a param of type int.
 * Return: int.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0')
	return (0);
}
