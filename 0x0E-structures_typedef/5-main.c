#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog;
	char *intro = "My name is";

	my_dog = new_dog("Poppy", 3.5, "Bob");
	printf("%s %s, and I am %.1f :) - Woof!\n", intro, my_dog->name, my_dog->age);
	free_dog(my_dog);
	return (0);
}
