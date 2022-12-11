#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: print the alphabet in lowercase then uppercase\n
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}


