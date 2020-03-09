#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - creates a new dog
 *@name: name of new dog
 *@age: dog age
 *@owner: owner of dog
 *
 *Return: pointer to new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup;

	pup = malloc(sizeof(dog_t));

	if (pup == NULL)
	{
		free(pup);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(pup);
		free(name);
		return (NULL);
	}
	pup->name = name;
	pup->age = age;
	pup->owner = owner;

	return (pup);
}
