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


	if (b == 0)
	{
		exit(98);
	}

	p = malloc(sizeof(b) * b);

	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	else
	{
		return (p);
	}

}
