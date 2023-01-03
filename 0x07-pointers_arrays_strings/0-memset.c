#include "main.h"

/**
 * *_memset - fills memory with a contant byte.
 * @s: pointer (first param).
 * @b: char (second param).
 * @n: int (third param).
 * Return: a pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
