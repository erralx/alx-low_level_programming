#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number whose bit to set
 * @index: index of the bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (n == NULL || index >= 64)
		return (-1);

	bit = (*n >> index) & 1;

	if (bit == 1)
		(*n) -= _pow_recursion(2, index);

	return (1);
}

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base
 * @y: exponent
 *
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
