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
 * @start: int (second param).
 * @end: int (second param).
 * Return: int.
 */
int palindrome_helper(char *s, int start,  int end)
{
	if (start > end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - finds if a string is palindrome or not.
 * @s: string (first param).
 * Return: int.
 */
int is_palindrome(char *s)
{
	int length = len(s);

	if (s == 1)
		return (1);

	return (palindrome_helper(s, 0, length - 1));
}
