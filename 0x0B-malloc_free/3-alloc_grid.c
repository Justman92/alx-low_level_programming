#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: width of array
 * @height: height of array
 * Each element of the grid should be initialized to 0
 *
 * Return: a double pointer to the 2D array
 * If width or height is 0 or negative, return NULL
 * The function should return NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	/* if width or height is 0 or negative, return NULL */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* create an array of pointers */
	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(a[j]);
			free(a);
			return (NULL);
		}
		/* initialize all values in the array to 0 */
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			a[i][j] = 0;
		}
	}
	return (a);
}
