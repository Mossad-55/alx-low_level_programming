#include "main.h"

/**
 * _strlen -  gets the length of a string.
 * @s: a string param.
 * Return: int.
 */
int _strlen(char *s)
{
	int i, len;

	i = 0;
	len = 0;
	while (s[i] != '0')
	{
		i++;
		len++;
	}
	return (len);
}
