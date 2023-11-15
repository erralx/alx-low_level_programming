#include "main.h"

#include <stdlib.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose length to return
 * Return: length of s
*/
int _strlen_recursion(char *s)
{
	if (s == NULL)
		exit(1);

	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
