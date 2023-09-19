/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: buffer
 * @src: string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int n;
	int i;

	n = string_length(src);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

/**
 * string_length - finds the length of a string.
 * @str: string whose length to find.
 *
 * Return: length of str.
 */
int string_length(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
	{
		c++;
	}

	return (c);
}
