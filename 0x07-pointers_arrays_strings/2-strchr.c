#include "holberton.h"
#define NULL 0

/**
 *_strchr - locates a character in a string
 *
 *@s: the string to search
 *@c: the char to locate
 *
 *Return: a pointer to the first occurrence of c in the string
 * NULL if char is not found.
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (!*s)
		{
			return (NULL);
		}
	}
	return (NULL);
}
