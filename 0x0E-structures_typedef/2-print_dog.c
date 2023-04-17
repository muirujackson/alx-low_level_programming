#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog record
 * @d: pointer to dog records
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d)
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
