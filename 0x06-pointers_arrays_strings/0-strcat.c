/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to append
 *
 * Return: Pointer to resulting string dest
 */
char* _strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);
}
