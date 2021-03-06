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
	char *arr;
	unsigned int i;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);

	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
