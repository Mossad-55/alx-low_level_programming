#include <stdio.h>

/**
 * main -  prints the number from 1 to 100.
 * We should print Fizz if the number is multiple of 3.
 * and Buzz if the number is multiple of 5.
 * Return: void.
 */
int main(void)
{
	int i;

	printf("1 ");
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", i);
	}
	printf("\n");

	return (0);
}
