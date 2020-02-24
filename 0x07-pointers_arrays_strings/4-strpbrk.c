#include "holberton.h"
#define NULL 0
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: the string to locate bytes in
 *@c: the char to locate
 *
 *Return: a pointer to the byte in s that matches
 */
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept)
{
	while (*s)
		if (_strchr(accept, *s++))
		{
			return ((char *) --s);
		}
	return (0);
}
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
