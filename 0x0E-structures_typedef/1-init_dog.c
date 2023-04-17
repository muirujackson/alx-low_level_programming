/**
 * init_dog - initialize a variable of type struct dog.
 * @d: p to dog
 * @name: p dog's name
 * @age: dog age
 * @owner: Owner's dog
 * Return: No.
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
