#include <stdlib.h>
#include <stdio.h>

#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *op;
	int a, b;
	int (*f)(int a, int b);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	f = get_op_func(op);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = f(a, b);

	printf("%i\n", result);

	return (0);
}
