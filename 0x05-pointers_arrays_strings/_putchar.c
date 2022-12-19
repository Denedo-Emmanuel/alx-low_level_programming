#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: character to be printed
 * Return: On success 1
 */
int _ putchar(char c)
{
	return (write(1, &c, 1));
}
