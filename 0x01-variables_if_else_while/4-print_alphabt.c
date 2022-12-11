#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: print all letters in lowercase except q and e\n
 * Return: Always 0 (success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		{
			continue;
		}
		putchar (x);
	}
	putchar('\n');
	return (0);
}
