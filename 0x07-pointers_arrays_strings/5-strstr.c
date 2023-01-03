#include "main.h"

/**
 * *_strstr - locates a substring.
 * @haystack: pointer (first param).
 * @needle: pointer (second param).
 * Return: pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp = needle;
	bool found = true;

	while (*haystack != '\0')
	{
		while (*needle != '\0')
		{
			if (*haystack != *needle)
			{
				found = false;
				break;
			}
			needle++;
			haystack++;
		}
		if (found)
			return (haystack);
		needle = temp;
		haystack++;
	}
	return (NULL);
}
