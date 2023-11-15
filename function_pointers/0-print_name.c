#include "function_pointers.h"

/**
 * print_name - function
 * @f: pointer to a function
 * @name: a string
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
