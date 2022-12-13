#include <stdio.h>

/**
 * main - prints the first 50 numbers of Fibonacci.
 * Return: void.
 */
int main(void)
{
	int i, res;

	res = 0;
	for (i = 0; i <= 50; i++)
	{
		res += i;
		printf("%d, ", res);
	}
	printf("\n");

	return (0);
}
