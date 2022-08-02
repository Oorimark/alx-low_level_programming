#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog struc
 * @name: first memeber of dog struc
 * @age: second member of dog struc
 * @owner: last member of dog struc
 *
 * Return: new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_i;
	char **name_store;
	char **owner_store;

	name_store = &name;
	owner_store = &owner;
	dog_i = malloc(sizeof(dog_t));
	if (dog_i == NULL)
	{
		return (NULL);
	}
	dog_i->name = *name_store;
	dog_i->owner = *owner_store;
	dog_i->age = age;
	return (dog_i);
}
