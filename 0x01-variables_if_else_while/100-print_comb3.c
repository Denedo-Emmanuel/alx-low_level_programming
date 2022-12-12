#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: print all possible different combination of two digi
 * Return: Always 0 (success)
 */
int main(void)
{
	int c, i;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = c + 1; i  <= '9'; i++)
		{
			putchar(c);
			putchar(i);
			if (c < '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
