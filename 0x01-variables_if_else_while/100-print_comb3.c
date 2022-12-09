#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Prints all the different cominations of two digits
 * Allowed function: putchar()
 * putchar() -> maximum five usages
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, counter, loops;

	i = 48;
	loops = 0;
	while (i < 57)
	{
		j = i + 1;
		counter = 9 - loops;
		while (counter > 0)
		{
			putchar(i);
			putchar(j++);
			if (i == 56)
				break;
			putchar(',');
			putchar(' ');
		}
		i++;
		loops++;
	}
	putchar('\n');

	return (0);
}
