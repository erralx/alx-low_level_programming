#include <stdlib.h>
#include <stdio.h>

int wordlen(char *, char);

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: NULL if fail or str == NULL or str == ""
 * else pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **arr;
	int arr_len, i, k;
	char *arr_curr_item;
	int arr_curr_item_i;

	if (str == NULL || *str == '\0')
		return (NULL);

	arr_len = 0;	
	i = 0;
	while (1)
	{
		if (str[i] == '\0')
		{
			arr_len++;
			break;
		}
		else if (str[i] == ' ')
		{
			arr_len++;
			i++;
			while (str[i] == ' ')
			{
				i++;
			}
			if (str[i] == '\0')
			{
				break;
			}
		}
		else
		{
			i++;
		}

	}

	arr = malloc((sizeof(char *) * arr_len) + 1);
	if (arr == NULL)
		return (NULL);

	i = 0, k = 0;
	arr_curr_item = NULL, arr_curr_item_i = 0;
	while (1)
	{
		if (str[i] == '\0' || str[i] == ' ')
		{
			if (arr_curr_item == NULL)
			{
				i++;
				if (str[i] == '\0')
					break;
				continue;
			}
			arr_curr_item[arr_curr_item_i] = '\0';
			arr[k] = arr_curr_item;
			arr_curr_item = NULL, arr_curr_item_i = 0;
			k++, i++;

			if (str[i] == '\0')
				break;
		}
		else
		{
			if (arr_curr_item == NULL)
			{
				arr_curr_item = malloc(sizeof(char) * (wordlen(&str[i], ' ') + 1));
				arr_curr_item_i = 0;
				if (arr_curr_item == NULL)
					return (NULL);
			}

			arr_curr_item[arr_curr_item_i] = str[i];
			arr_curr_item_i++, i++;
		}
	}

	k++;
	arr[k] = NULL;

	return (arr);
}

/**
 * wordlen - Returns the length of a word in a string,
 * as defined through the delimiter.
 * @s: string containing the word
 * @delimiter: character signifying end of word
 *
 * Return: Length of the word
 */
int wordlen(char *s, char delimiter)
{
	unsigned int len;

	for (len = 0; s[len] != delimiter || s[len] == '\0'; len++)
	{
		continue;
	}

	return (len);
}
