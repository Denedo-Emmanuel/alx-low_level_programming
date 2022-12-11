#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: print all single digit of base 10 startinng from 0
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
