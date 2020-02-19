#include "holberton.h"


/**
 *_strcpy - copies a string pointed to by src
 *
 *@dest: destination
 *@src:starting string point
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{
	int p;
	int i;

	p = 0;


	while (src[p] != '\0')
	{
		p++;
	}

	for (i = 0; i < p; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
