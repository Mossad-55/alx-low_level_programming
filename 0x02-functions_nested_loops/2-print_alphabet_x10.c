#include "main.h"

/**
 * print_alphabet_x10 -  Prints the alphabet from a-z ten times.
 * Return: void.
 */
void print_alphabet(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
