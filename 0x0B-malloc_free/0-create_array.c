#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array- creates an array of chars and inits with a specific char
 *
 *@c: initialzed char
 *@size: size of the array
 *Return: NULL if size = 0
 *Returns a pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *vp;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	vp = malloc(sizeof(c) * size);

	if (vp == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		vp[i] = c;
	}

	return (vp);
}
