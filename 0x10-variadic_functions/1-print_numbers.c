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
	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(nums, int));
		else if (separator && i == 0)
			printf("%d", va_arg(nums, int));
		else
			printf("%s%d", separator, va_arg(nums, int));
	}
	printf("\n");

	va_end(nums);
}
