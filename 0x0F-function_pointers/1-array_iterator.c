#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @array: array to iterate through
 * @size: size of array
 * @action: function to execute on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
