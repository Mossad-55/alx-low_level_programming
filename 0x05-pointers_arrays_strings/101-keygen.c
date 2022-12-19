#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - generates a 9 digits of random number as password.
 * Return: void.
 */
int main(void)
{
	int i, n;
	unsigned long int sum;
	char pass[100];

	n = i = sum = 0;
	char *al = "0123456789ABCDEFGHIJKLNMOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	srand(time(NULL));

	while (sum < (2772 - 122))
	{
		n = rand() % 62;
		pass[i] = al[n];
		sum += pass[i];
		i++;
	}
	n = 2772 - sum;
	pass[i] = n;
	pass[++i] = '\0';
	printf("%s\n", pass);

	return (0);
}
