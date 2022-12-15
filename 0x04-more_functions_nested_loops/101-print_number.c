#include "main.h"

/**
 * print_number -  prints the number
 * @n: int as a param.
 * allowed functions _putchar() only.
 * Return: void.
 */
void print_number(int n)
{
	unsigned int temp1, temp2;
	int i, j, tens;

	i = 1;
	tens = 1;
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	temp1 = n;
	temp2 = n;
	while (temp1 >= 10)
	{
		temp1 = temp1 / 10;
		i++;
	}
	for (j = 1; j < i; j++)
		tens = tens * 10;
	while (tens > 1)
	{
		_putchar((temp2 / tens) % 10 + '0');
		tens /= 10;
	}
	_putchar(temp2 % 10 + '0');
}
