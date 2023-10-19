#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list_t list to print
 *
 * Return: the number of nodes in h
 */
size_t print_list(const list_t *h)
{
	if  (h == NULL)
	{
		return (0);
	}

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%u] %s\n", h->len, h->str);
	}

	return (1 + print_list(h->next));
}
