#include "dog.h"

char *_copy(char *str);
/**
 * init_dog - function that initialize a dog structure
 * @d: the dog structure
 * @name: a dog name
 * @age: an age of the dog
 * @owner: the name of the dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = _copy(name);
	d->age = age;
	d->owner = _copy(owner);
}

/**
 * _copy: function
 * @str: string
 * Return: a string
 */
char *_copy(char *str)
{
	unsigned int i = 0, len = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	while (*(str + len))
	{
		len++;
	}

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	while (*(str + i))
	{
		*(copy + i) = *(str + i);
		i++;
	}
	*(copy + i) = '\0';

	return (copy);
}
