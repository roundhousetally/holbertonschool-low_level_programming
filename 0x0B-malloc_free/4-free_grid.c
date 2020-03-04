#include "holberton.h"
#include <stdlib.h>
/**
 *free_grid - freeing the memory taken up by grid
 *
 *@grid: the pointer to the multi array
 *@height: height of grid
 *
 *Return: void
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
