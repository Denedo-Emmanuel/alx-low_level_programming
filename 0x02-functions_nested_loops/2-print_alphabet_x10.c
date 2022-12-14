#include "main.h"

/**
 * main - entry point
 * Description: program print the alphabet 10 times in lowercase
 * @alpha: followed by a new line
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char abc;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar ('\n');
	}
}
