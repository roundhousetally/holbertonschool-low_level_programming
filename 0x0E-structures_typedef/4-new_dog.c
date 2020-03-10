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
	dog_t *new;
	unsigned int o, t, i;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}
	for (o = 0; name[o]; o++)
		;
	o++;
	new->name = malloc(o * sizeof(char));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < o; i++)
	{
		new->name[i] = name[i];
	}
	new->age = age;
	for (t = 0; owner[t]; t++)
		;
	t++;
	new->owner = malloc(t * sizeof(char));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	for (i = 0; i < o; i++)
		new->owner[i] = owner[i];

	return (new);
}
