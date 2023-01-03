#include "main.h"

/**
 * *_strchr - located a character in a string.
 * @s: pointer (first param).
 * @c: char (second param).
 * Return: a pointer.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
	}

	return (&s[i]);
}
