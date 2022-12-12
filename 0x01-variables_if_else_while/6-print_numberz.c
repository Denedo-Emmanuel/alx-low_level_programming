#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Descroption: program prints all single digitsfrom 0 in base 10\n
 * Return: Always 0(success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
