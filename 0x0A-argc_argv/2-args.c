#include <stdio.h>

/**
 * main - prints all the arguments arguments passed.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int counter;

	counter = 0;
	while (counter < argc)
	{
		printf("%s\n", argv[counter++]);
	}

	return (0);
}
