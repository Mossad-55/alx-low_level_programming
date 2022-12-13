#include "main.h"

/**
 * times_table - prints the times table of 9 starts from 0.
 * Return: void.
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < 10)
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
