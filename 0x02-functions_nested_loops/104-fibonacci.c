#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long int a, b, c, i;

	a = 1;
	b = 2;

	printf("%i, %i, ", a, b);
	for (i = 0; i <= 98; i++)
	{
		c = a + b;
		a = b;
		b = c;

		printf("%lu", c);

		if (c < 5035488507601418376)
			printf(", ");
	}

	return (0);
}
