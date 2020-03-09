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
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));


	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
