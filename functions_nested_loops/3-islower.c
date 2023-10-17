#include <stdio.h>

/**
 * _islower - Checks if a character given in parameter is lowercase
 *
 * Return: returns 1 if character is in lowercase and 0 otherwise
 */
int _islower(char ch)
{
  if (ch >= 'a' && ch <= 'z') return (1);
  else return (0);
}
