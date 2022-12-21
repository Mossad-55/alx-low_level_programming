#include "main.h"

/**
 * *cap_string - captialize all words of a string.
 * @s : pointer points to an array of chars.
 * Return: string (char array).
 */
char *cap_string(char *s)
{
	int i, j;
	char special[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	i = 1;
	while (s[i] != '\0')
	{
		j = 0;
		while (special[j] != '\0')
		{
			if (s[i - 1] == special[j] && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= 32;
			j++;
		}
		i++;
	}

	return (s);
}
