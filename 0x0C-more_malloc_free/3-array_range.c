#include <stdlib.h>

/**
 * *array_range - creates an array of integers from min to max
 * @min: start value of array
 * @max: end value of array
 *
 * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int arr_len, i;

	if (min > max)
		return (NULL);

	arr_len = max - min + 1;
	arr = malloc(arr_len * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < arr_len; min++, i++)
		arr[i] = min;

	return (arr);
}
