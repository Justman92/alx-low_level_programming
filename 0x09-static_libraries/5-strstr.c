#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string in which to check for needle
 * @needle: substring to find in haystack
 *
 * Return: pointer to beginning of needle in haystack or NULL if no match
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int y = 0, z = 0;

	while (haystack[y])
	{
		while (needle[z] && (haystack[y] == needle[0]))
		{
			if (haystack[y + z] == needle[z])
				z++;
			else
				break;
		}
		if (needle[z])
		{
			y++;
			z = 0;
												}
		else
			return (haystack + y);
	}
	return (0);
}
