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

	dog_i = malloc(sizeof(dog_t));
	if (dog_i == NULL)
	{
		return (NULL);
	}
	dog_i->name = name;
	dog_i->owner = owner;
	dog_i->age = age;
	return (dog_i);
}
