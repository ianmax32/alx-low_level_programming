#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory using malloc
 * @b:argument for size of memory
 * Return:0
 */

void *malloc_checked(unsigned int b)
{
	void  *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
