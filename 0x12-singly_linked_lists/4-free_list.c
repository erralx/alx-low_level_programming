#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the first node of the list
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free(head->str);
	free_list(head->next);
	free(head);
}
