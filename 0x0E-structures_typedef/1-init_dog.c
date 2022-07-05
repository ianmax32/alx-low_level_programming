#include "dog.h"

/**
 * init_dog - function initialize a variable type of
 * struct dog
 * @d:pointer to stuct
 * @name:name of dog
 * @age:age of dog
 * @owner:owner of dog
 * Return:0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
