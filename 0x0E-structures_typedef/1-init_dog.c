#include "dog.h"

/**
 * init_dog - function to initialize dog variables
 * @d: where we store dog record
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the ownwer of the dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = *name;
		d->age = age;
		d->owner = *owner;
	}
};
