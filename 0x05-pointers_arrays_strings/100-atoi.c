#include "main.h"

/**
 * _atoi - returns the first integer from a string.
 * @s: pointer points to the first array element.
 * Return: int.
 */
int _atoi(char *s)
{
	int i, num;
	short sign, first_num;

	i = num = 0;
	sign = 1;
	first_num = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			first_num = 1;
			num *= 10;
			num += s[i] - '0';
		}
		else
			break;
		i++;
	}
	num *= sign;
	return (num);
}
