#include "holberton.h"
#include <stdlib.h>
/**
 *_calloc - allocate memory for an array using malloc
 *
 *@nmemb: amount of elements
 *@size: size of array
 *
 *Return: a pointer to the alloc'd memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	unsigned int i;

	arr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		arr[i] = 0;
	}
	return (arr);
	free(arr);
}
