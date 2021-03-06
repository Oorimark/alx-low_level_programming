#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the dog struct
 * @d: struct dog pointer
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf(" ");
	}
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\nAge: (nil)\nOwner: (nil)\n");
		}
		else
		{
			printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d-> owner);
		}
	}
}
