#include <stdio.h>
#include <main.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char word_string[] = "_putchar";
int i = 0;
while (word_string != '\0')
{
putchar(word_string[i]);
i++;
}
putchar('\n');
return (0);
}
