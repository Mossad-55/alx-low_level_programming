#include "main.h"

/**
 * rev_string - reverse a string.
 * @s: pointer points to a str.
 * Return: void.
 */
void rev_string(char *s)
{
	int i, j, temp;

	i = 0;
	while (s[i] != '\0')
		i++;

	i--;
	j = 0;
	while (j < i)
	{
		temp = s[i];
		s[i--] = s[j];
		s[j++] = temp;
	}
}
