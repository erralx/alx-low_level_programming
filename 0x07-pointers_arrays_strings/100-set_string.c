/* #include <stdlib.h> */

/* int _strlen(char *s)
{
	int i, len;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
} */

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer whose value to set
 * @to: char used to set the pointer
 */
void set_string(char **s, char *to)
{
	/* int s_new_len = _strlen(to);
	int s_new_bytes = s_new_len + 1;
	char *s_new = malloc(s_new_bytes); */

	*s = to;
}
