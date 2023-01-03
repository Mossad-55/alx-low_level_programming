#include "main.h"
#include <stdio.h>

/**
 * set_string - sets pointer to char.
 * @s: pointer (first param).
 * @to: char (second param).
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
