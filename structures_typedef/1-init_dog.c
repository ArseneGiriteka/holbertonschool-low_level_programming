#include "dog.h"

/**
 * init_dog - function that initialize a dog structure
 * @d: the dog structure
 * @name: a dog name
 * @age: an age of the dog
 * @owner: the name of the dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}