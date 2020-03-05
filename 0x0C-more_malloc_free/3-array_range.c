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


	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(((max - min) + 1) * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}


	for (i = 0; min <= max; i++, min++)
	{
		arr[i] = min;
	}

	return (arr);
}
