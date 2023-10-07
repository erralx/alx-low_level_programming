#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd strind, whose n bytes are added to s1
 * @n: number of bytes to use from s2
 *
 * Return: NULL if fail. Otherwise, pointer to a newly allocated
 * space in memory, which contains s1, followed by the first n bytes of s2,
 * and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0, len = 0, i = 0, j = 0;
	char *str = NULL;

	if (s1 == NULL)
		s1 = "";
	else
		for (i = 0; s1[i] != '\0'; i++)
		{
			s1_len++;
			len++;
		}

	if (s2 == NULL)
		s2 = "";
	else
		for (i = 0; s2[i] != '\0' && i < n; i++)
		{
			s2_len++;
			len++;
		}

	len++;

	str = malloc(len);
	if (str == NULL)
		return (NULL);


	j = 0;
	for (i = 0; s1[i] != '\0'; i++, j++)
		str[j] = s1[i];
	for (i = 0; s2[i] != '\0' && i < n ; i++, j++)
		str[j] = s2[i];
	str[j] = '\0';

	return (str);
}
