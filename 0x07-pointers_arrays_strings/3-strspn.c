#include <limits.h>

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
	unsigned int len = 0, i;

	for (; *accept != '\0'; accept++)
	{
		for (i = 0;; i++)
		{
			if (s[i] == '\0')
			{
				return (len);
			}

			if (s[i] == *accept)
			{
				if (i + 1 > len)
					len = i + 1;
				break;
			}

			continue;
		}
	}

	return (len);
}
