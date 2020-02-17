#include "holberton.h"


/**
 *_strlen - calculates the length of a string
 *
 *@s: the string to be counted
 *
 * Return: the length of the string
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; (s[i] != '\0'); i++)
	{
		_putchar(i);
	}

	return (0);
}
