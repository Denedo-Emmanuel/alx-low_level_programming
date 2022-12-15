#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: number of times a character _ should be printed
 * Return: o
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}

	_putchar('\n');
}
