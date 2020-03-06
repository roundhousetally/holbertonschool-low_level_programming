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
	if (new_size > old_size)
	{
		ptr = malloc(old_size);
		return (ptr);
		free(ptr);
	}
	else if (new_size == old_size)
	{
		return (ptr);
		free(ptr);
	}
	else if (ptr == NULL)
	{
		ptr = malloc(new_size + old_size);
	}
	else
	{
		ptr = malloc(new_size);
	}

	return (ptr);
	free(ptr);

}
