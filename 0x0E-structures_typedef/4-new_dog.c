#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create record of dog
 * @name: dor's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(p));
	if (!p)
		return (NULL);
	strcpy(p->name, name);
	p->age = age;
	strcpy(p->owner, owner):;
	return (p);
}
