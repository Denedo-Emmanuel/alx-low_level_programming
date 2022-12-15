#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets in lowercase
 * ten times followed by a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int n = 0;

	while (n <= 9)
	{
		char m = 'a';

		while (m <= 'z')
		{
			_putchar(m);
			m++;
		}

		_putchar('\n');
		n++;
	}
}
