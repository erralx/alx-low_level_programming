#include "dog.h"

/**
 * init_dog - intializes a dog structure with provided members
 * @dog: pointer to structure to initialize
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{	
	d->name = name;
	d->age = age;
	d->owner = owner;
}
