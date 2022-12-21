#include "main.h"

/**
 * *string_toupper - changes all lowercase letters to uppercase.
 * @s : pointer points to an array of chars.
 * Return: string (char array).
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}

	return (s);
}
