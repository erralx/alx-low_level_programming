/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: char to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
