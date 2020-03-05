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
	int i, k;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc((min + max) * sizeof(int));

	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i < min; i++)
	{
		arr[i] = min;
	}
	for (k = 0; k < max; k++)
	{
		arr[i] = max;
		i++;
	}
	return (arr);
}
