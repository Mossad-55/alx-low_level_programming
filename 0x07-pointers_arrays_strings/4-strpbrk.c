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
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
