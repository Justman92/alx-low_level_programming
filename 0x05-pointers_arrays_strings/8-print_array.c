#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array of integers
 * @b: the start of an aaray of integers
 * @a: the number of array elements to print
 *
 * Return: void
 */
void print_array(int *b, int a)
{
	if (b)
	{
	while (a > 0)
	{
	printf("%d", *b++);
	if (--a)
		printf(", ");
	}
	putchar('\n');
	}
}
