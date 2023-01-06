#include <stdio.h>
#include "main.h"

/**
 * get_number - multiplies two arguments and print the result.
 * @s: string.
 * Return: int.
 */
int get_number(char *s)
{
	int len, mult, number, counter;
	char *temp = s;

	len = number = counter = 0;
	mult = 1;
	while (*temp++ != '\0')
		len++;

	while (counter < len - 1)
	{
		mult *= 10;
		counter++;
	}
	counter = 0;
	while (counter < len)
	{
		if (s[counter] != '-')
		{
			number += (s[counter] - '0') * mult;
			mult /= 10;
		}
		counter++;
	}
	if (s[0] == '-')
		return ((number / 10) * -1);
	else
		return (number);
}

/**
 * main - multiplies two arguments and print the result.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0(Success) or 1(Error).
 */
int main(int argc, char *argv[])
{
	int sum, num, i, j, k;

	sum = 0;
	if (argc - 1 == 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = get_number(argv[k]);
		if (num >= 0)
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
