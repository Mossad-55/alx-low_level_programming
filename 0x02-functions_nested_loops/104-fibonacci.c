#include <stdio.h>

/**
 * main - Prints the first 98 of the Fibonacci numbers.
 * Return: void
 */

int main(void)
{
	int counter;
	unsigned long i, j, k;
	unsigned long m, n, p, carry;

	n = 0;
	i = 0;
	j = 1;
	for (counter = 1; counter <= 91; counter++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu, ", k);
	}
	m = i % 1000;
	i = i / 1000;
	n = j % 1000;
	j = j / 1000;
	while (counter <= 98)
	{
		carry = (m + n) / 1000;
		p = (m + n) - carry * 1000;
		k = (i + j) + carry;
		m = n;
		n = p;
		i = j;
		j = k;
		if (p >= 100)
			printf("%lu%lu", k, p);
		else
			printf("%lu0%lu", k, p);
		if (counter != 98)
			printf(", ");
		counter++;
	}
	printf("\n");
	return (0);
}
