#include "main.h"

/**
 * reverse_array -> revserve the content of an array
 * @a: array a
 * @n: element of array
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0, k;

	n = n -1;
	while (i < n)
	
	{
		k = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = k;
		i++;
		n--;
	}
}
