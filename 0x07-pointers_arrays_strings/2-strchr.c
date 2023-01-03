#include "main.h"

/**
 * *_strchr - located a character in a string.
 * @s: pointer (first param).
 * @c: char (second param).
 * Return: a pointer.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;
		if (*s == c)
			break;
	}

	return (s);
}
