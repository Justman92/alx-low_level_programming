#include "main.h"

/**
 * leet -> encodes a string into 1337
 * @x: string to encode
 *
 * Return: address of x
 */
char *leet(char *x)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
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
