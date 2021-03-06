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
	char *b, *e, *full;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	full = e = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (e == NULL)
	{
		return (NULL);
	}
	for (b = s1; (*e = *b) != '\0'; ++b, ++e)
	{
	}
	for (b = s2; (*e = *b) != '\0'; ++b, ++e)
	{
	}
	b = '\0';
	return (full);
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
