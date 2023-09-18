/**
 * _strlen - returns the length of a string
 * @s: string whose length to return
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (1)
	{
		if (*s == '\0')
		{
			break;
		}

		len++;
		s++;
	}

	return (len);
}
