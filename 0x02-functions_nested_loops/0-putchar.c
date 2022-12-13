#include <unistd.h>
/**
 * main - Entry point
 * Printing the word "_putchar" followed by a new line
 * Using only _putchar() from 'unistd.h'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str;
	int i;

	str = "_putchar";
	for (i = 0; i < 8; i++)
		_putchar(str[i]);

	_putchar('\n');

	return (0);
}
