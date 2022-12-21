#include "main.h"

/**
 * *_strcat - appends string from src to dest
 * @dest: is a pointer (first param).
 * @src: is a pointer (second param).
 * Return: char pointer (string).
 */
char *_strcat(char *dest, char *src)
{
	int l, r;

	l = 0;
	r = 0;
	while (dest[l] != '\0')
		l++;

	while (src[r] != '\0')
	{
		dest[l] = src[r];
		l++;
		r++;
	}
	dest[l] = '\0';

	return (dest);
}
