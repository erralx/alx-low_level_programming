#include "main.h"

/**
 * print_sign - prints sign of number
 * @n: number whose sign to print
 *
 * Return: 1 if n>0, 0 if n=0, -1 if n<0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	_putchar(48);
	return (0);
}
