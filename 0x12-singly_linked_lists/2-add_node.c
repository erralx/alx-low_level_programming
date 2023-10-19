#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to list's head pointer
 * @str: string of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
		(*head)->str = strdup(str);
		(*head)->len = strlen(str);
		(*head)->next = NULL;
		return (*head);
	}

	new = malloc(sizeof(list_t));

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
