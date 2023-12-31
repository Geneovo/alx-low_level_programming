#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: pointer to the struct dog variable to initialize
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of new dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
