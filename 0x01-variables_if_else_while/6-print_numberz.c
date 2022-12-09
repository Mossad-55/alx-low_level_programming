#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Prints all numbers from 0-9 followed by a new line
 * We aren't allowed to use char or printf
 * Allowed function: putchar()
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
		putchar(i++);

	putchar('\n');

	return (0);
}
