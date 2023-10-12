#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printer - printer struct
 * @specifier: format specifier
 * @f: printer function
 */
struct printer
{
	char specifier;
	void (*f)(va_list ap);
};

typedef struct printer printer_t;

#endif /* MAIN_H */
