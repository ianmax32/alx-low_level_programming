#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function prints a struct dog
 * @d:pointer to the struct dog
 * Return:0
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name:%s\n", "nil");
		}
		else

		if (d->age <= 0)
		{
			printf("Age: %s\n", "nil");
		}
		else
			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
		{
			printf("Owner %s\n", "nil");
		}
		else
			printf("Owner: %s\n", d->owner);
	}
}
