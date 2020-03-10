#include "dog.h"
#include <stdlib.h>
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
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

	new_dog->name = malloc(_strlen(name) * sizeof(char) + 1);

	_strcpy(new_dog->name, name);

	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(_strlen(owner) * sizeof(char) + 1);

	_strcpy(new_dog->owner, owner);

	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
/**
 *_strlen - calculates the length of a string
 *
 *@s: the string to be counted
 *
 * Return: the length of the string
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 *_strcpy - copies a string pointed to by src
 *
 *@dest: destination
 *@src:starting string point
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{
	int p;
	int i;

	p = 0;


	while (src[p] != '\0')
	{
		p++;
	}

	for (i = 0; i < p; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
