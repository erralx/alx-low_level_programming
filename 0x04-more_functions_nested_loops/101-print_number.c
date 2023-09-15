#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
	unsigned int n_recur = n;

	if (n < 0)
	{
		n = -n;
		n_recur = n;
		_putchar('-');
	}

	n_recur = n_recur / 10;

	if (n_recur != 0)
	{
		print_number(n_recur);
	}

	_putchar((unsigned int)n % 10 + '0');
}
