#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *strdup;
	unsigned int i, str_size;

	if (str == NULL)
	{
		return (NULL);
	}

	str_size = 0;
	while (str[str_size] != '\0')
	{
		str_size++;
	}
	str_size++;

	strdup = malloc(str_size);
	if (strdup == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		strdup[i] = str[i];
		i++;
	}
	strdup[i] = '\0';

	return (strdup);
}
