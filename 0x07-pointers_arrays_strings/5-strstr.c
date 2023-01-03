#include "main.h"
#include <stdio.h>

/**
 * *_strstr - located a substring.
 * @haystack: pointer (first param).
 * @needle: pointer (second param).
 * Return: pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		char *temp = haystack;
		bool found = true;

		for (i = 0; needle[i]; i++)
		{
			if (temp[i] != accept[i])
			{
				found = false;
				break;
			}
		}
		if (found)
			return (temp);
		haystack++;
	}
	return (NULL);
}
