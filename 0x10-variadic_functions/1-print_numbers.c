#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	ap = va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, int));
		if (i != n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
			printf(" ");
		}
	}

	printf("\n");
}
