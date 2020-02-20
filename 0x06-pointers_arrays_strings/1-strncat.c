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

	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
