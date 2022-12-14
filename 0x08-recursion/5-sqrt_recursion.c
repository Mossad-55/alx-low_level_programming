#include "main.h"

/**
 * _sqrt_check - a helper method to calc the sqrt.
 * @counter: int (first param).
 * @num: int (second param).
 * Return: int.
 */
int _sqrt_check(int counter, int num)
{
	if (counter * counter == num)
		return (counter);
	if (counter * counter > num)
		return (-1);

	return (_sqrt_check(counter + 1, num));
}

/**
 * _sqrt_recursion - returns the value of x raised to power y.
 * @n: int (first param).
 * Return: int.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (_sqrt_check(1, n));
}
