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
	list_t *node_i;


	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->str = strdup(str);
	new->len = strlen(str);

	if ((*head) == NULL)
	{
		(*head) = new;
	}
	else
	{
		node_i = *head;
		while (node_i->next != NULL)
		{
			node_i = node_i->next;
		}

		node_i->next = new;
	}

	return (new);
}
