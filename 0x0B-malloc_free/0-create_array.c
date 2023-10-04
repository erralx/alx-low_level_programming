#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: specified char
 *
 * Return: NULL if size = 0 or if fail, else: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	// printf("Running create_array with size: %u, char: %c", size, c);

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(c) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		arr[i] = c;
	}

	// printf("Ran create_array, returning...");

	return (arr);
}
