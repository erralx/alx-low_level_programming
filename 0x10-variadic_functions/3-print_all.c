#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

#include "variadic_functions.h"

/**
 * p_char - prints a char
 * @ap: argument pointer variable pointing to to-be-printed char
 */
void p_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * p_int - prints an int
 * @ap: argument pointer variable pointing to to-be-printed int
 */
void p_int(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * p_float - prints a float
 * @ap: argument pointer variable pointing to to-be-printed float
 */
void p_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * p_string - prints a string
 * @ap: argument pointer variable pointing to to-be-printed string
 */
void p_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char *
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j;
	printer_t printers[] = {
		{ 'c', p_char },
		{ 'i', p_int },
		{ 'f', p_float },
		{ 's', p_string }
	};
	char *separator = "";

	va_start(ap, format);

	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4 && format[i] != printers[j].specifier)
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			printers[j].f(ap);
			separator = ", ";
		}

		i++;
	}

	printf("\n");
}
