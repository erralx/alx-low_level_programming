/**
 * *leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	char *letters, *replace;
	int count, count2;

	letters = "aAeEoOtTlL";
	replace = "4433007711";

	count = 0;

	while (str[count] != '\0')
	{
		count2 = 0;

		while (letters[count2] != '\0')
		{
			if (str[count] == letters[count2])
			{
				str[count] = replace[count2];
			}

			count2++;
		}

		count++;
	}

	return (str);
}
