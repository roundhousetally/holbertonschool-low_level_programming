#include "dog.h"


/**
 *init_dog - initializes the variables of struct dog
 *
 *@d: pointer to dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
