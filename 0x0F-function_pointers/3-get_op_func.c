#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * asked by the user
 * @s: the operator passed as argument to the program
 *
 * Return: The function matching the operation of the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
	}

	return (NULL);
}
