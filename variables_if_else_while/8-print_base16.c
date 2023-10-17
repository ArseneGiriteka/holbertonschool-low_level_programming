#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char number_char = '0';
char letter_char = 'a';
while (number_char <= '9')
{
putchar(number_char);
number_char++;
}
while (letter_char <= 'f')
{
putchar(letter_char);
letter_char++;
}
putchar('\n');
return (0);
}
