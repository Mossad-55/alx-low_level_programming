#include "main.h"

/**
 * *_strncpy - copies a string from src to dest n times.
 * @dest: is a pointer (first param).
 * @src: is a pointer (second param).
 * @n: is a number of type int (third param).
 * Return: char pointer (string).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l;

	l = 0;
	while (src[l] != '\0' && l < n)
	{
		dest[l] = src[l];
		l++;
	}
	while (l < n)
		dest[l++] = '\0';

	return (dest);
}
