#include "main.h"

/**
 * leet -> a leet function
 * @x: param x
 * Return: a string
 */
char *leet(char *x)
{
	int i, j;
	char a[] = "aAeEo0tT1L";
	char b[] = "4433007711";

	for (i = 0; *(x + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(x + i))
				*(x + i) = b[j];
		}
	}
	return (x);
}
