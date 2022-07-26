#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: width of array
 * @height: height of array
 * 
 * Return: a double pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width == 0 || height == 0)
		return (NULL);
	a = malloc(height * sizeof(int *));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; ++i)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (i = 0; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
	}
		/* initialize all values in the array to 0 */
	for (i = 0; i < height; ++i)
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	return (a);
}
