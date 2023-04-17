#include "dog.h"

/**
 * print_dog - print dog record
 * @d: pointer to dog records
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n Age: %.6f\n Owner: %s\n", d->name, d->age, d->owner);
}
