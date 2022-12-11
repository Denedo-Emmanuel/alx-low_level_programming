#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: print the alphabet in lowercase\n
 * Return: Alway 0(success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
