#include <stdio.h>

/**
 * main - a program that finds and prints the largest prime factor
 * Return: 0
 */
int main(void)
{
	long i;
	long number = 612852475143;

	for (i = 2; i < number; i++)
	{
		while (number % i == 0)
			number = number / i;
	}
	printf("%li\n", number);
	return (0);
}
