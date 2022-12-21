#include "main.h"

/**
 * *cap_string - captialize all words of a string.
 * @s : pointer points to an array of chars.
 * Return: string (char array).
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	i = 1;
	while (s[i] != '\0')
	{
		if (s[i - 1] == ' ' || s[i - 1] == '.')
			s[i] -= 32;
		i++;
	}

	return (s);
}
