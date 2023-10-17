#include <stdio.h>

/**
 * main - Entry point
 *
 * Return : Always 0 (success)
 */
int main(void)
{
  char command_string [] = "abcdefghijklmnopqrstuvwxyABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int counter = 0;
  while (command_string [counter] != '\0')
    {
      putchar(command_string [counter]);
      counter ++;
    }
  putchar('\n');
return (0);
}
