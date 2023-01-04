#include "main.h"

/**
 * factorial - returns the factorial.
 * @n: int (first param).
 * Return: int.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
