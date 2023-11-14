#include "dog.h"

char *_copy(char *str);

/**
 * new_dog - function that create a new dog
 * @name: a name for the dog
 * @age: age of the dog
 * @owner: name of the dog owner
 * Return: a struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = _copy(name);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->age = age;

	my_dog->owner = _copy(owner);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
	}
	return (my_dog);
}

/**
 * _copy - function
 * @str: a string to copy
 * Return: a string
 */
char *_copy(char *str)
{
	unsigned int i = 0;
	char *copy;

	while (*(str + i))
	{
		i++;
	}

	copy = malloc(sizeof(char) * (i + 1));
	if (copy == NULL)
		return (NULL);

	i = 0;
	while (*(str + i))
	{
		*(copy + i) = *(str + i);
		i++;
	}
	*(copy + i) = '\0';

	return (copy);
}
