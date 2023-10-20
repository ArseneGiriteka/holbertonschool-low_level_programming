#include "main.h"

/**
 * _isupper - check the case of a given letter
 *
 * @c: a ascii code of a character
 *
 * Return: return 1 (uppercase) 0 (Otherwise)
 */
int _isupper(int c)
{
	if ('A' <= c && 'Z' >= c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
