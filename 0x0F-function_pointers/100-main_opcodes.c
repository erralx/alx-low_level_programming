#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of itself
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int nbytes, i;
	unsigned char *code;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}


	code = (char *)main;

	for (i = 0; i < nbytes; i++)
	{
		printf("%.2x", code[i]);
		if (i != nbytes - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
