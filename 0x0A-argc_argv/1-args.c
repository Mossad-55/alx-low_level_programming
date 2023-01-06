#include <stdio.h>

/**
 * main - prints number of arguments passed.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argc - 1);
	return (0);
}
