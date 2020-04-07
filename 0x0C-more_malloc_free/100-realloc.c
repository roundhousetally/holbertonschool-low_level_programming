#include "holberton.h"
#include <stdlib.h>
/**
 *_realloc - reallocate memory to a new size
 *
 *@ptr: pointer to new memory block
 *@old_size: old size of mem block
 *@new_size: new size of mem block
 *
 *Return: a pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return (new);
	}
	new = malloc(new_size);
	if (new == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		new[i] = ((char *)ptr)[i];

	free(ptr);
	return (new);
}
