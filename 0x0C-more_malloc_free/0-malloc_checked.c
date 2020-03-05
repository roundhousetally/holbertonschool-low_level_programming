#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory and returns memory to a pointer
 *
 *@b: original bytes to be multiplied by size to malloc
 *
 *
 *Return: a pointer to memory space, or exit.
 */
void *malloc_checked(unsigned int b)
{
	int *p;


	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
	}

}
