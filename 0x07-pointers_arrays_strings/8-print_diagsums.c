#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: matrix of integers
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum_1 = 0, sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_1 += a[(i * size) + i];
	}

	for (i = 0; i < size; i++)
	{
		sum_2 += a[size - 1 + ((size - 1) * i)];
	}

	printf("%d, %d\n", sum_1, sum_2);
}
