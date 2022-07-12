#include "main.h"

/**
 * print_rev - print a string, in reverse, followed by a new line
 * @n: the string to print
 *
 * Return: void
 */
void print_rev(char *n)
{
	char *t = n;

	if (n)
	{
	while (*t)
		++t;
	while (n < t--)
		_putchar(*t);
	_putchar('\n');
	}
}
