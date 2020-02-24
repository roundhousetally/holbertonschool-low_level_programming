#include "holberton.h"

/**
 *_memcpy - copies n byes from mem area src to mem area dest
 *
 *@dest: the destination
 *@src: source mem area
 *@n: amount of bytes to copy
 *
 *Return: a pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
