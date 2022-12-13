#include <stdio.h>

/**
 * main - prints the sum of even number in Fibonacci.
 * Must not exceed 4,000,000.
 * Return: void.
 */
int main(void)
{
	unsigned long i, j, next, res;

	i = 0;
	j = 1;
	while (next < 4000000)
	{
		next = i + j;
		i = j;
		j = next;
		if (next % 2 == 0)
			res += next;
	}
	printf("%lu\n", res);

	return (0);
}
