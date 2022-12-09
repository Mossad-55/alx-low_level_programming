#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Prints all numbers followed by ,
 * Allowed function: putchar()
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i++);
		if (i == 58)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
