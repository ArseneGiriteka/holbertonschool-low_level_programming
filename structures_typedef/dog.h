#ifndef HEADER_FILE_H
#define HEADER_FILE_H

#include <stdlib.h>
#include <stdio.h>

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
typedef struct  dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
