#include "holberton.h"
#define NULL 0

/**
 *_strstr - finds the first occurence of the substring needle
 *in the string haystack
 *@haystack- string to be checked
 *@needle- what we are looking for in haystack.
 *@s: the string for length
 *Return: a pointer to the beginning of the located substring or null
 */
int _strlen(char *s);
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	int nTemp = i;
	int nhaystack = _strlen(haystack);
	int nneedle = _strlen(needle);

	for (i = 0; i < (nhaystack - nneedle); i++)
	{
		nTemp = i;
		for (j = 0; j < nneedle; j++)
		{
			if (haystack[nTemp] == needle[j])
			{
				if (j == (nneedle - 1))
				{
					return (needle);
					nTemp++;
				}
				else
					return (NULL);
				break;
			}
		}
	}
	return (needle);
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
