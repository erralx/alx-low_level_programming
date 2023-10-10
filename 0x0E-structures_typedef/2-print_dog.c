#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: dog struct to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s", d->name);
	printf("\n");

	printf("Age: %f", d->age);
	printf("\n");

	if ((*d).owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s", d->owner);
	printf("\n");
}
