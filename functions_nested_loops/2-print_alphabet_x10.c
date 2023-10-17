#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
int i = 0, t = 0;
for (t = 0; t < 10; t++)
{
while ('a' + i <= 'z')
{
putchar('a' + i);
i++;
}
putchar('\n');
i = 0;
}
return;
}
