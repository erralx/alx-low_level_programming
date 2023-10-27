#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: number 1
 * @m: number 2
 * Return: number of bits you would need to flip to get from n to m
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;

	while (1)
	{
		if (n == m)
			break;

		if ((n & 1) != (m & 1))
			flips++;

		n >>= 1;
		m >>= 1;
	}

	return (flips);
}
