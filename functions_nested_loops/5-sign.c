#include <stdio.h>
/**
 * print_sign - figures is the sign of an int
 *
 * @n: a number to check its sign
 *
 * Return: 1 if n > 0, -1 if n < 0 , 0 otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
