#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: if new_size == 0, NULL. Else, pointer to the newly allocated space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *block = NULL;
	unsigned int size, i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	block = malloc(new_size);
	if (block == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		free(ptr);
		return (block);
	}
	else if (old_size < new_size)
		size = old_size;
	else
		size = new_size;


	for (i = 0; i < size; i++)
		((char *)block)[i] = ((char *)ptr)[i];

	free(ptr);
	return (block);
}
