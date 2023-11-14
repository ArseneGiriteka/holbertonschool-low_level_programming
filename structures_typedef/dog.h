#ifndef HEADER_FILE_H
#define HEADER_FILE_H

#include <stdlib.h>
/**
 * struct dog - a dog structure
 * @age: an age of the dog
 * @name: a string that gives the name of the dog
 * @owner: a string that gives the name of the dog owner
 */
struct dog
{
	char *name;
	double age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
