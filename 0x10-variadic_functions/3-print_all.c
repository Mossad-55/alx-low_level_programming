#include "variadic_functions.h"

/**
 * print_all - prints anything it gets.
 * @format: the format of the argument.
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str, *sep;
	va_list list;

	i = 0;
	str = "", sep = "";

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
		printf("\n");
		va_end(list);
	}
}

