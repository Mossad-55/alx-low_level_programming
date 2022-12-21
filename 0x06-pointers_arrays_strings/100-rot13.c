#include "main.h"

/**
 * *rot13 - Incodes a string using rot13.
 * @s : pointer points to an array of chars.
 * Return: string (char array).
 */
char *rot13(char *s)
{
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (input[j] != '\0')
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
