#include "holberton.h"

/**
 *string_toupper- all lowercase letter to uppercase
 *@s: string to be changed
 *
 *Return: letters in uppercase
 *
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	++i;
	}
	return (s);
}
