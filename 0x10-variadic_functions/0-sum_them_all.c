#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of numbers.
 * @n: number of arguments.
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	va_start(args, n);
	if (n <= 0)
	{
		va_end(args);
		return (0);
	}

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
