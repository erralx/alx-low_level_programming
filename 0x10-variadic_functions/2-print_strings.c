#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *ca;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ca = va_arg(ap, char *);
		if (ca == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ca);
		}

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
}
