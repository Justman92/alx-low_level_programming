#include "main.h"

/**
 * print_alphabet_x10 -> prints the lowercase alphabets
 */

void print_alphabet_x10(void)
{
	int j;
	int z;

	for (z = 0; z < 10; z++)
	{
		for  (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	}	_putchar('\n');
}
