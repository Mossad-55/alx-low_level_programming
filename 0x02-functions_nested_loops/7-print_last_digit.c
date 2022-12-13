#include "main.h"

/**
 * print_last_digit -  returns the last digit of a number.
 * @n: it's a param of type int.
 * Return: int.
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
		digit *= -1;

	_putchar(digit + '0');
	return (digit);
}
