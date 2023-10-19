#include "lists.h"

void __attribute__((constructor)) first();

/**
 * first - runs before main is executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
