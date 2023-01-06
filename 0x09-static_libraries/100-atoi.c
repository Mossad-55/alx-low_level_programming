#include "main.h"

/**
 * _atoi - returns the first integer from a string.
 * @s: pointer points to the first array element.
 * Return: int.
 */
int _atoi(char *s)
{
	unsigned int i, num;
	short sign, catch;

	i = num = 0;
	sign = 1;
	catch = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			catch = 1;
			num *= 10;
			num += s[i] - '0';
		}
		else if (catch)
			break;
		i++;
	}
	num *= sign;
	return (num);
}
