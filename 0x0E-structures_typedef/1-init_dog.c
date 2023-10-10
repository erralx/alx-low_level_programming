#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - intializes a dog structure with provided members
 * @d: pointer to structure to initialize
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
