#include "main.h"

/**
 * *_strstr - locates a substring.
 * @haystack: pointer (first param).
 * @needle: pointer (second param).
 * Return: pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	char *res = haystack, *temp = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
				break;
		}
		if (!*needle)
			return (res);

		needle = temp;
		result++;
		haystack = res;
	}
	return (0);
}
