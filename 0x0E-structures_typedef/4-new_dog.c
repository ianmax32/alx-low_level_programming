#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function creates a new dog
 * @name:name of the dog
 * @age:age of dog
 * @owner:owner of dog
 * Return:0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *s;

	s = (dog_t*) malloc(sizeof(char) * 2);

	if (s == NULL)
		return (NULL);

	s->name = name;
	s->age = age;
	s->owner = owner;

	return (s);
}
