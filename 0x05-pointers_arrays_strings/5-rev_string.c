#include "main.h"

/**
 * rev_string - reverse a string
 * @n: the string to reverse
 *
 * Return: void
 */
void rev_string(char *n)
{
	char *t = n;

	if (n)
	{
	while (*t)
		++t;

	while (s < --t)
	{
	*n ^= *t;
	*t ^= *n;
	*n ^= *t;
	++n;
	}
	}
}
