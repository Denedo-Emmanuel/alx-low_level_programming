#include "main.h"

/**
 * main - entry point
 * Description: print all alphabet in lowercase \n
 * Return: void
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
