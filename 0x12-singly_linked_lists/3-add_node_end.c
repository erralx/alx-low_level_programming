#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: first node in list
 * @str: string of node to add
 *
 * Return: newly added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;


	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	new->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new;
	}
	else
	{
		while ((*head)->next != NULL)
		{
			head = &((*head)->next);
		}

		(*head)->next = new;
	}

	new->str = strdup(str);
	new->len = strlen(str);
	return (new);
}
