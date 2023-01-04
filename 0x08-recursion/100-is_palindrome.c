#include "main.h"

/**
 * len - finds the length of a string.
 * @s: string (first param).
 * Return: int.
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}

/**
 * palindrome_helper - a helper method.
 * @s: string (first param).
 * @i: int (second param).
 * @j: int (second param).
 * Return: int.
 */
int palindrome_helper(char *s, int i,  int j)
{
	if (i > j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (palindrome_helper(s, i + 1, j - 1));
}

/**
 * is_palindrome - finds if a string is palindrome or not.
 * @s: string (first param).
 * Return: int.
 */
int is_palindrome(char *s)
{
	int length;

	length = len(s);
	if (length == 1 || length == 0)
		return (1);

	return (palindrome_helper(s, 0, length - 1));
}
