#include "main.h"

/**
 * main - entry point
 * Description: print all alphabet in lowercase \n
 * Return: void
 */
print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
