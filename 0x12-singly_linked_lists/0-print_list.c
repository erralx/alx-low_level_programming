#include "lists.h"

size_t print_list(const list_t *h)
{
	if  (h == NULL)
	{
		printf("Error\n");
		return(1);
	}

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%u] %s\n", h->len, h->str);
	}

	if (h->next == NULL)
	{
		return (1);
	}

	return (1 + print_list(h->next));
}
