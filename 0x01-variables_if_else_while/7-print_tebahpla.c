#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Prints all alphabets reversed in lowercase
 * Allowed function: putchar()
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
		putchar(c--);

	putchar('\n');

	return (0);
}
