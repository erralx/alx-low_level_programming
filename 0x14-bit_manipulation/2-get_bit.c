#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number whose bit at index to get
 * @index: index of the bit to get
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	return ((n >> index) & 1);
}
