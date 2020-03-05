#include "holberton.h"
#include <stdlib.h>
/**
 *string_nconcat - concatenate n bytes of a string
 *
 *@s: string to append to
 *: second string to take n bytes from
 *: amount of bytes to concate
 *
 *Return: pointer to newly alloc'd space. Null on failure
 */
int _strlen(char *s);
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *both;
	unsigned int k, h;
	int size2;

	size2 = _strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= size2)
	{
		both = malloc((_strlen(s1) + size2 + 1) * sizeof(char));
		n = size2;
	}
	else
	{
		both = malloc((size + n + 1) * sizeof(char));
	}

	if (both == NULL)
	{
		return (NULL);
	}

	for (k = 0; s1[k] != '\0'; k++)
	{
		both[k] = s1[k];
	}

	for (h = 0; h < n; h++)
	{
		both[k] = s2[h];
		k++;
	}
	both[k] = '\0';
	return (both);
}
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
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
