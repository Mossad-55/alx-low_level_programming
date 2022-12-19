#include "main.h"

/**
 * print_rev - reverse a string.
 * @s: pointer points to a str.
 * Return: void.
 */
void print_rev(char *s)
{
	int i, j, temp;

	j = 0;
	while (s[j] != '\0')
		j++;
	j--;
	for (i = 0; j > i; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}
