#include "main.h"

/**
 * *leet - Incodes a string into 1337.
 * @s : pointer points to an array of chars.
 * Return: string (char array).
 */
char *leet(char *s)
{
	int i, j;
	char chars[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (chars[j] != '\0')
		{
			if (s[i] == chars[j])
				s[i] = nums[j];
			j++;
		}
		i++;
	}

	return (s);
}
