#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer (first param).
 * @accept: pointer (second param).
 * Return: unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c;
	char *temp;

	c = 0;
	temp = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		}
		if (!(*--accept))
			break;
		accept = temp;
	}
	return (c);
}
