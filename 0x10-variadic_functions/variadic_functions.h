#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printer_t - printer struct
 * @specifier: format of argument to print
 * @f: printer function
 */
struct printer_t
{
	char specifier;
	void (*f)(va_list ap);
};

#endif /* MAIN_H */
