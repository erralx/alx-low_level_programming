#include "lists.h"


/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: list whose len to return
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
	{
		return (0);
	}

	return (1 + list_len(h->next));
}
