#include "main.h"

/**
 * _islower - checks if a character c is lower case
 * @c: the character to be checked
 * Return: 1 if c is lowercase and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
	_putchar('\n');
}
