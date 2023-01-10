#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concates two string in a new allocated memory.
 * @s1: string.
 * @s2: string.
 * Return: pointer or null.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int i, j, len1, len2;

	i = j = 0;
	len1 = 0;
	len2 = 0;
	while (s1[i++] != '\0')
		len1++;

	i = 0;
	while (s2[i++] != '\0')
		len2++;

	new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new_str == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		new_str[i] = s1[i];
		i++;
	}

	while (len2--)
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';

	return (new_str);
}
