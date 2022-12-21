#include "main.h"

/**
 * *_strncat - appends string from src to dest till n
 * @dest: is a pointer (first param).
 * @src: is a pointer (second param).
 * @n: is a number of type int (third param).
 * Return: char pointer (string).
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, r;

	if (n < 1)
		return (dest);

	l = 0, r = 0;
	while (dest[l] != '\0')
		l++;

	while (src[r] != '\0' && r < n)
		dest[l++] = src[r++];
	dest[l] = '\0';

	return (dest);
}
