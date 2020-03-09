#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *print_dog - prints the struct dog
 *
 *@d: pointer to dog
 *
 *Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nil)\n");
	}
	if (d->age)
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
