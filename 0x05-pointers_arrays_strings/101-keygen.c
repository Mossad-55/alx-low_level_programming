#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - generates a password.
 * Return: void.
 */
int main(void)
{
	int ascii = 2772, i = 0, j, random;
	char pass[100];
	time_t t;

	srand((int) time(&t));
	while (ascii > 126)
	{
		random = rand() % 126;
		pass[i] = random;
		ascii -= random;
		i++;
	}
	if (ascii > 0)
		pass[i] = ascii;
	else
		i--;

	for (j = 0; j <= i; j++)
		printf("%c", pass[j]);

	return (0);
}
