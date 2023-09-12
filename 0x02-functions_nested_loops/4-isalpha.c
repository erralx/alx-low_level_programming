#include "main.h"

/**
 * _isalpha - Checks for alphabetic char
 * @c: Char to check
 *
 * Return: 1 if letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return  (0);
	}
}
