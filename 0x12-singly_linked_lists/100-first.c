#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
* before_main - get's executed before main and prints a string.
*
* Return: void
*/
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
