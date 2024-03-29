#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize variable struct type dog
 * @d: struct to initialize
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
