#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns a pointer to a 2 dimensional
 * array of integers
 * @width:argument parameter representing width
 * @height:second argument parameter for width of the array
 * Return:0
 */

int **alloc_grid(int width, int height)
{
	int a = 0;
	int b = 0;
	int *s;
	int **e = &s;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(width * height);

	if (s == NULL)
		return (NULL);

	while (a < height)
	{
		while (b < width)
		{
			s[b] = 0;
			b++;
		}
		a++;
	}
	return (e);
}
