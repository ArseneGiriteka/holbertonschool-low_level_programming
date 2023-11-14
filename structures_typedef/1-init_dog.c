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
	unsigned int i = 0;

	while (*(name + i))
	{
		i++;
	}

	d->name = malloc(sizeof(char) * (i + 1));
	if (d->name == NULL)
	{
		return;
	}
	i = 0;
	while (*(name + i))
	{
		*(d->name + i) = *(name + i);
		i++;
	}
	*(d->name + i) = '\0';

	i = 0;
	while (*(owner + i))
	{
		i++;
	}
	d->owner = malloc(sizeof(char) * (i + 1));
	if (d->owner == NULL)
	{
		return;
	}
	i = 0;
	while (*(owner + i))
	{
		*(d->owner + i) = *(owner + i);
		i++;
	}
	*(d->owner + i) = '\0';

	d->age = age;
}
