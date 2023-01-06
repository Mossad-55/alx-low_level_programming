#include <stdio.h>

/**
 * get_number - multiplies two arguments and print the result.
 * @s: string.
 * Return: int.
 */
int get_number(char *s)
{
	int len, mult, number, counter, flag;
	char *temp = s;

	len = number = counter = 0;
	mult = flag = 1;
	while (*temp++ != '\0')
		len++;

	if (s[0] == '-')
		flag == -1;
	
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
	int num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = get_number(argv[1]);
	num2 = get_number(argv[2]);

	printf("%d\n", (num1 * num2));

	return (0);
}
