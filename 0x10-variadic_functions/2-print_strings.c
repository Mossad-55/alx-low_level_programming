#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator to sperate numbers.
 * @n: number of arguments.
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list strs;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(strs, char *);
		if (!s)
			s = "(nil)";
		if (!separator)
			printf("%s", s);
		else if (separator && i == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}
	printf("\n");

	va_end(strs);
}
