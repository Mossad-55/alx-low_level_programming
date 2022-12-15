#include "main.h"

/**
 * print_number -  prints the number
 * @n: int as a param.
 * allowed functions _putchar() only.
 * Return: void.
 */
void print_number(int n)
{
	int temp_n1, temp_n2;
	int num_of_digit, mod;

	num_of_digit = 1;
	mod = 1;
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	temp_n1 = n;
	temp_n2 = n;

	while (temp_n1 >= 10)
	{
		temp_n1 /= 10;
		num_of_digit++;
	}

	while (num_of_digit--)
		mod *= 10;

	while (mod > 0)
	{
		_putchar((temp_n2 % mod) + '0');
		mod /= 10;
	}
}
