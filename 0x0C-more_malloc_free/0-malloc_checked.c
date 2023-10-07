#include <stdlib.h>

#include <stdio.h>

/**
 * *malloc_checked - allocates memory using malloc, checked
 * @b: number of bytes to allocate
 *
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
