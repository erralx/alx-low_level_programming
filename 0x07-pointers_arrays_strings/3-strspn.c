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
	unsigned int len = 0, i, j, res;

	for (i = 0;; i++)
	{
		if (accept[i] == '\0')
		{
			break;
		}

		for (j = 0;; j++)
		{
			if (s[j] == '\0')
			{
				return (0);
			}

			if (s[j] == accept[i])
			{
				if (j + 1 > len)
					len = j + 1;
				break;
			}

			res = contains(accept, s[j]);
			if (res == 0)
			{
				return (0);
			}

			continue;
		}
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
