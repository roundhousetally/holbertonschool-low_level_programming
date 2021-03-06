#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - free's a previously allocd dog
 *
 *@d: pointer to dog struct
 *
 *Return: void
 */
void free_dog(dog_t *d)
{
	if (!d)
	{
		return;
	}
	else
	free(d->name);
	free(d->owner);
	free(d);
}
