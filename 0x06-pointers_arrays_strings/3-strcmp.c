#include "main.h"

/**
 * _strcmp- compares two string.
 * @s1: is a pointer (first param).
 * @s2: is a pointer (second param).
 * Return: int.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
	;

	return (s1[i] - s2[i]);
}
