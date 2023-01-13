#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concates two strings
 * @s1: string one
 * @s2: string two
 * @n: int
 * Return: a pointer to the allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int len1, len2, i, j;

	i = j = len1 = len2 = 0;
	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	new_string = malloc(sizeof(char) * (len1 + n));
	if (new_string == NULL)
		return (NULL);

	if (s1)
	{
		while (s1[i])
		{
			new_string[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (n--)
		{
			new_string[i] = s2[j];
			i++;
			j++;
		}
	}
	new_string[i] = '\0';

	return (new_string);
}
