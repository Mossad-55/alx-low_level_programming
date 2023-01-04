#include "main.h"

/**
 * prime_helper - a helper method to calc the sqrt.
 * @base: int (first param).
 * @n: int (second param).
 * Return: int.
 */
int prime_helper(int base, int n)
{
	if (n < 2 || n % 2 == 0)
		return (0);
	else if (base > n / 2)
		return (1);
	else
		return (prime_helper(base + 1, n));
}

/**
 * is_prime_number - returns the value of x raised to power y.
 * @n: int (first param).
 * Return: int.
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (prime_helper(2, n));
}
