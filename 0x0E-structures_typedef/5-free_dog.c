#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function frees the dogs
 * @d:pointer to the dog
 * return:0
 */

void free_dog(dog_t *d)
{
	int a = 0;

	if (d != NULL)
	{
		while (d[a] != '\0')
		{
			free(d[a]);
			a++;
		}
	}
}
