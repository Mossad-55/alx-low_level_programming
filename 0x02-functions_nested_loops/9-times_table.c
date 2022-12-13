#include "main.h"

/**
 * times_table - prints the times table of 9 starts from 0.
 * Return: void.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar((i * j) + '0');
			_putchar(',');
			if (i * j < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
