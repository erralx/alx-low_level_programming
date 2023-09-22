/**
 * _strncat - concatenates two strings
 * @dest: concatenate to
 * @src: concatenate from
 * @n: max num bytes from src
 *
 * Return: pointer to resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
