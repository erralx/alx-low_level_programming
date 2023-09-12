#include "main.h"

/**
 * _abs - Computes the absolute value of an int
 * @n: num whose absolute value to compute
 *
 * Return: Absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}

	return (n);
}
