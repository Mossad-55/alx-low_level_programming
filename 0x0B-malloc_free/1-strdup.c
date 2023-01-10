#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies a string into a new allocated memory.
 * @str: string.
 *
 * Return: pointer or null.
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i, len;

	i = 0;
	len = 0;
	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
