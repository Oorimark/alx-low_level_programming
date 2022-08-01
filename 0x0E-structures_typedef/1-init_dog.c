#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialized the dog struct
 * @d: dog struct
 * @name: dog memeber name
 * @age: dog memeber age
 * @owner: dog member owner
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
