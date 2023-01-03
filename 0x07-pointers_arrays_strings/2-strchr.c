#include "main.h"

/**
 * *_strchr - located a character in a string.
 * @s: pointer (first param).
 * @c: char (second param).
 * Return: a pointer.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);

	return (0);
}
