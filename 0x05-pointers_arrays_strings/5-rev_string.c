#include "holberton.h"


/**
 *rev_string - reverses a string
 *
 *@s: the string to be reversed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s);
void rev_string(char *s)
{
	int b = 0;
	int e = 0;
	char tmp;

	while (s[e + 1])
	{
		e++;
	}
	for (; b <= e; b++, e--)
	{
		tmp = s[b];
		s[b] = s[e];
		s[e] = tmp;
	}
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
