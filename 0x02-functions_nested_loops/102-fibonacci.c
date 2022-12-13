#include <stdio.h>

/**
 * main - prints the first 50 numbers of Fibonacci.
 * Return: void.
 */
int main(void)
{
	unsigned long i, j, next, counter;

	i = 0;
	j = 1;
	for (i = 0; i < 50; i++)
	{
		next = i + j;
		i = j;
		j = next;

		printf("%lu", next);
		if (n == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
