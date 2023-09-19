/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int k, i, len, tmp;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	k = 0;

	i--;

	while (k < len / 2)
	{
		tmp = s[k];
		s[k] = s[i];
		s[i] = tmp;
		i--;
		k++;
	}
}
