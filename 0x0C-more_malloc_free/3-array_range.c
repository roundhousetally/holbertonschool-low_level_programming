#include "holberton.h"
#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *
 *@min: amount of ints
 *@max: max ints
 *
 *Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int combo;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc((min + max + 1) * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	combo = min + max;

	for (i = 0; i < combo; i++)
	{
		arr[i] = i;
	}

	return (arr);
}
