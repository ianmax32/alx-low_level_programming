#ifndef DOG_H_FILE
#define DOG_H_FILE

/**
 * struct dog - strut defines the structure of a dog
 * @name:name of dog
 * @age:age of dog
 * @owner:owner of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} Dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
