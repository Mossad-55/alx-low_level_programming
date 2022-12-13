#include "main.h"

/**
 * _isalpha -  returns 1 if it's a letter otherwise 0.
 * @c: it's a param of type int.
 * Return: int.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

return (0);
}
