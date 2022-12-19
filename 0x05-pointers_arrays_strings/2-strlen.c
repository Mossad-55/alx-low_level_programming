#include "main.h"

/**
 * _strlen -  gets the length of a string.
 * @s: pointer points to a str.
 * Return: int.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
