#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument values
 *
 * Return: NULL if ac==0 or av==NULL or if fail.
 * Pointer to the concatenated string otherwise.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	unsigned int str_size;
	int i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);

	str_size = 0;
	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str_size++;
			j++;
		}
		str_size++;
	}
	str_size++;

	str = malloc(sizeof(char) * str_size);
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j];
			j++;
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
