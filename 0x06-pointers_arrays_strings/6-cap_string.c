/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: Pointer to capitalized string
 */
char *cap_string(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[i] = str[i] - 32;
		}

		switch (str[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
		}

		i++;
	}

	return (str);
}
