#include <stdio.h>
#include "1-main.h"
/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: Always void.
 */
void print_alphabet()
{
int i = 0;
while ('a' + i <= 'z')
{
putchar('a'+i);
i++;
}
putchar('\n');
return;
}
