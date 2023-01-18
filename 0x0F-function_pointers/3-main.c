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
	int num1, num2, res;
	int (*func)(int, int);
	char op;

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

	op = *argv[2];
	if ((op == '/' || op == '%') && num2 == 0)
	{
		error_func();
		exit(98);
	}

	res = func(num1, num2);
	printf("%d\n", res);

	return (0);
}
