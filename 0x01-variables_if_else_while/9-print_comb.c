#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: print all possible combinations of single-digit numbe
 * rs
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9' ; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
