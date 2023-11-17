#include "dog.h"

/**
 * print_dog - function the print info about dog structure
 * @d: a dog structure
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((d->name) != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("(nil)\n");

		printf("Age: %.6f\n", d->age);

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("(nil)\n");
	}
	else
		printf("\0");
}
