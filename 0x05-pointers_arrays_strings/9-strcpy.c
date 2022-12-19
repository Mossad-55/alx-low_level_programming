#include "main.h"

/**
 * *_strcpy - copies a string from src to dest.
 * @dest: destination pointer.
 * @src: source pointer.
 * Return: char pointer.
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
		i++;

	i++;
	for (j = 0; j < i; j++)
		dest[j] = *(src + j);
	return (dest);
}
