#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Prints all numbers of base 16 in lowercase
 * Allowed function: putchar()
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;

	i = 48;
	c = 'a';
	while (i < 58)
		putchar(i++);

	while (c <= 'f')
		putchar(c++);

	putchar('\n');

	return (0);
}
