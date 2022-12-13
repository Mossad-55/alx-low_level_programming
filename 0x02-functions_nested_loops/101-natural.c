#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 and 5.
 * Return: void.
 */
int main(void)
{
	int i, res;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	}
	printf("%d\n", res);

	return (0);
}
