#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: number of elements in array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: -1 if no element matches or size <= 0. The index of the first
 * element for which cmp does not return 0;
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
