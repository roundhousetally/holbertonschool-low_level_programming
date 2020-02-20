#include "holberton.h"

/**
 *_strncat- concatenates two string taking only an n number from the src
 *
 *@n: the number of bytes to take from src.
 *@dest: the destination of the strings.
 *@src: the string to be appended.
 *
 *Return: the concatenated string
 *
 */
char *_strncat(char *dest, char *src, int n)
{

	char *together = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (((i + 1) <= n) && src[i] != '\0')
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (together);
}
