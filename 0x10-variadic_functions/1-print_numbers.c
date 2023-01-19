#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator to sperate numbers.
 * @n: number of arguments.
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(nums, int));
		if (!separator)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(nums, int));

	va_end(nums);
}
