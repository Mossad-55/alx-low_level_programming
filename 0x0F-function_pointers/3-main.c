#include "3-calc.h"

/**
 * error_func - prints Error followed by a new line.
 * Return: void
 */
void error_func(void)
{
	printf("Error\n");
}

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*func)(int, int);

	if (argc != 4)
	{
		error_func();
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		error_func();
		exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		error_func();
		exit(98);
	}

	prtinf("%d\n", func(num1, num2));

	return (0);
}
