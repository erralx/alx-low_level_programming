#include <stddef.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: character to find
 *
 * Return: Pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}

	return (s);
}
