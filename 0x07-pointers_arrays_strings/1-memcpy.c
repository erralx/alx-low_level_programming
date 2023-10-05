/**
 * *_memcpy - copies memory area
 * @dest: (copied-to) destination memory area
 * @src: (copied-from) source memory area
 * @n: number of bytes to copy
 *
 * Return: Pointer to destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
