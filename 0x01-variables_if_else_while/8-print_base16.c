#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: print all numbers of base 16 in lowercase
 * Return: Always 0(success)
 */
int main(void)
{
	char c;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
