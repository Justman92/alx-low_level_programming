#include "main.h"

/**
 * _putchar - print a string, followed by a new line
 * @str: the string to print
 *
 * Return: void
 */
void _putchar(char *str)
{
	if (str)
	{
	while (*str)
	_putchar(*str++);
	_putchar('\n');
	}
}
