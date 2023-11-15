#include "dog.h"

unsigned int _length(char *);
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

	d->name = malloc(sizeof(char) * (_length(name) + 1));
	if (d->name == NULL)
		exit (0);
	
	while (*(name + i))
	{
		*(d->name + i) = *(name + i);
		i++;
	}
	*(d->name + i) = '\0';

	d->owner = malloc(sizeof(char) * (_length(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		exit(0);
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

/**
 * _length - function
 * @str: a string
 * Return: unsigned int value
 */
unsigned int _length(char *str)
{
	unsigned int i = 0;

	if (str == NULL)
		return (0);

	while (*(str + i))
	{
		i++;
	}

	return (i);
}
