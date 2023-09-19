#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to print
 */
void print_rev(char *s)
{
	char *s_start = s;
	char *s_end = s;

	while (*s != '\0')
	{
		s++;
		s_end++;
	}

	while (1)
	{
		_putchar(*s_end);
		if (s_end == s_start)
			break;
		s_end--;
	}

	_putchar('\n');
}
