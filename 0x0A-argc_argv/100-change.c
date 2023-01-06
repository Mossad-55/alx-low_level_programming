#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to change.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success) Or 1 (Error).
 */
int main(int argc, char *argv[])
{
	int num, i, res;
	int coins[] = {25, 10, 5, 2, 1};

	res = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			num -= coins[i];
			res++;
		}
	}
	printf("%d\n", res);

	return (0);
}
