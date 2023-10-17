#include <stdio.h>

/**
 * _islower - Checks if a character given in parameter is lowercase or uppercase
 *
 * @ch: is a character passed in parameters
 *
 * Return: returns 1 if character is in lowercase or uppercase and 0 otherwise
 */
int _isalpha(char ch)
{
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
