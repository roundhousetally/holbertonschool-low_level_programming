#include "holberton.h"
#include <stdlib.h>
/**
 *strtow - takes a string and separates it into words.
 *
 *@str: the string to sep.
 *
 *Return: NULL if failed, otherwise a pointer to the sep string
 *
 */
char **strtow(char *str)
{
	int i, j = 0;
	char **p;
	int t = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	p[t] = malloc(sizeof(char) * i);

	for (; (j > 64 && j < 91) || (j > 97 && j < 122); j++)
	{
		if (j == 32)
		{
			j++;
		}

		if (p == NULL)
		{
			return (NULL);
		}
		p[t] = str[j];
	}
	return (p);
	free(p);

}
