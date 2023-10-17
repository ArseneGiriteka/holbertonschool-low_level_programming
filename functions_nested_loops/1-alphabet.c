#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: Always void.
 */
void print_alphabet(void)
{
int i = 0;
while ('a' + i <= 'z')
{
putchar('a' + i);
i++;
}
putchar('\n');
return;
}
