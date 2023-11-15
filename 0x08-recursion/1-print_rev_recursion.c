#include "main.h"

#include <stdlib.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print in reverse
*/
void _print_rev_recursion(char *s)
{
	if (s == NULL)
		exit(1);

	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
