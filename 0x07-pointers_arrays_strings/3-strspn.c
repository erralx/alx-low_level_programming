unsigned int contains(char *str, char c);

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: substring
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0, i, res;

	for (i = 0; s[i] != '\0'; i++)
	{
		res = contains(accept, s[i]);
		if (res == 0)
		{
			return (len);
		}

		len++;
	}

	return (len);
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
