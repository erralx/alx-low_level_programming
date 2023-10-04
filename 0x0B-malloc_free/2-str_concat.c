#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL on failure. Pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int s_size, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s_size = 0, i = 0;
	while (s1[i] != '\0')
	{
		s_size++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s_size++;
		i++;
	}
	s_size++;
	s = malloc(s_size);
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0, j = 0;
	while (s1[j] != '\0')
	{
		s[i] = s1[j];
		i++, j++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++, j++;
	}
	s[i] = '\0';
	return (s);
}
