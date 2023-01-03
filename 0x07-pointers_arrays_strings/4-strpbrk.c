#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - search a string for any of a set of bytes.
 * @s: pointer (first param).
 * @accept: pointer (second param).
 * Return: pointer.
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	temp = accept;
	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
				return (s);
		}
		accept = temp;
	}
	return (NULL);
}
