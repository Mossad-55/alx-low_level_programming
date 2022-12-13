#include <stdio.h>

/**
 * main - prints the sum of even number in Fibonacci.
 * Must not exceed 4,000,000.
 * Return: void.
 */
int main(void)
{
	unsigned long i, j, next, res;
	int counter;

	i = 0, counter = 0;
	j = 1;
	res = 0;
	while (counter < 50)
	{
		next = i + j;
		i = j;
		j = next;
		if (next % 2 == 0 && next < 4000000)
			res += next;
		counter++;
	}
	printf("%lu\n", res);

	return (0);
}
