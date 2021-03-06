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

	if (width == 0 || height == 0 || width + height < 2)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int *));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			for (i = 0; i < width; i++)
			{
				free(array[i]);
			}

			free(array);
			return (NULL);
		}
	}
	return (array);
}
