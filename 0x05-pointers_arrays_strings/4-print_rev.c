#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to print
 */
void print_rev(char *s)
{
	int num_chars = 0;

	while (*s != '\0')
	{
		num_chars++;
		s++;
	}

	s--;

	for (; num_chars > 0; num_chars--, s--)
	{
		_putchar(*s);
	}

	_putchar('\n');
}
