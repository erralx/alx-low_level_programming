#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: set of bytes to find
 *
 * Return: pointer to the first byte in s that matches
 * one of the bytes in accept, or NULL if none found
 */
char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; s++)
	{
		if (contains(accept, *s))
			return (s);
	}

	return (NULL);
}

/**
 * contains - returns whether a string contains a char
 * @str: string to search
 * @c: char to find
 *
 * Return: 1 if str contains c, 0 otherwise
*/
unsigned int contains(char *str, char c)
{
	for (; *str != '\0'; str++)
	{
		if (*str == c)
			return (1);
	}

	return (0);
}
