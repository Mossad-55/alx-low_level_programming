#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * The function will output a string using a for loop
 * Return: 1 (standard error)
 * We have to use the unistd.h Library.
 */
int main(void)
{
char *str;
str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

for(int i = 0; i < strlen(str); i++)
{
	putchar(str[i]);
}
putchar('\n');

return (1);

}
