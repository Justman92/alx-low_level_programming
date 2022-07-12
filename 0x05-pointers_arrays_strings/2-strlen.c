#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @j: the string to calculate the length of
 *
 * Return: the length of the string
 */
int _strlen(char *j)
{
	int len = 0;

	if (j)
	{
	while (*(j + len))
		++len;
	}
	return (len);
}
