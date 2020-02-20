#include "holberton.h"

/**
 *_strcat - concatenate two string together
 *
 *@dest: the string to be appended to.
 *@src: the string to append.
 *
 *Return: a pointer to string dest
 *
 */
char *_strcat(char *dest, char *src)
{
	char *together = dest;

	if (('\0' != dest) && ('\0' != src))
	{
		while ('\0' != *dest)
		{
			dest++;
		}
		while ('\0' != *src)
		{
			*dest++ = *src++;
		}
		*dest = '\0';
	}
	return (together);
}
