#include "holberton.h"
#include <stdlib.h>
/**
 *str_concat - concatenate two string with proper memory alloc
 *
 *@s:first string to append to
 *
 *
 *Return: pointer to the concatenated string.
 *
 */
int _strlen(char *s);
char *str_concat(char *s1, char *s2)
{
	int is1;
	int is2;
	int len1;
	int len2;
	int totallen;
	char *p;

	len1 = _strlen(s1) - 1;
	len2 = _strlen(s2);
	totallen = len1 + len2;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	p = malloc(totallen * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (is1 = 0; is1 <= len1; is1++)
	{
		p[is1] = s1[is1];
	}

	is1++;

	for (is2 = 0; is2 <= len2; is2++)
	{
		p[is1] = s2[is2];
	}
	return (p);
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
