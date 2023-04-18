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
	{
		printf("Name: %s\n", d->name);
		printf("Age: %s\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
