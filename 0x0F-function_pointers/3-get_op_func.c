#include "3-calc.h"

/**
 * get_op_func - function pointer to get the op_func.
 * @s: the operator.
 *
 * Return: a pointer or NULL.
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
