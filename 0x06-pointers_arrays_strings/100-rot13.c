#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @x: param
 *
 * Return: adress of x
 */
char *rot13(char *x)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(x + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(x + i))
			{
				*(x + i) = b[j];
				break;
			}
		}
	}
	return (x);
}
