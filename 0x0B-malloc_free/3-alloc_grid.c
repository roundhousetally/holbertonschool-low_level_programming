#include "holberton.h"
#include <stdlib.h>
/**
 *alloc_grid - creates and allocates a two dim array of ints
 *
 *@width: grid columns
 *@height: grid rows
 *
 *Return: pointer to grid on success, null otherwise
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(width * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
		free(array);
	}

	for (i = 0; i < width; i++)
	{
		array[i] = malloc(height * sizeof(int));
		if (array[i] == NULL)
		{
			return (NULL);
			free(array[i]);
		}
	}

	return (array);

	for (i = 0; i < width; i++)
	{
		free(array[i]);
	}
	free (array);
}
