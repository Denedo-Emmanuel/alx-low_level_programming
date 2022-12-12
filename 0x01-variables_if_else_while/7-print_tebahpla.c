#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: Program prints the English alphabet in reverse order
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
