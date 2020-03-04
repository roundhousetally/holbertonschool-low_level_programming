#include "holberton.h"
#include <stdlib.h>

int _strlen(char *s);
/**
 *argstostr - concat args to a string
 *
 *@ac: arg count
 *@av: args
 *
 *Return: concatted string
 *
 */
char *argstostr(int ac, char **av)
{
	unsigned int i;
	int a, b, len;
	char *_all_args;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		len += _strlen(av[a]);
	}

	_all_args = malloc(sizeof(char *) * len);

	if (_all_args == NULL)
	{
		return (NULL);
	}

	b = 0;

	for (a = 0; a < ac; a++)
	{
		for (i = 0; av[a][i]; i++, b++)
		{
			*(_all_args + b) = *(*(av + a) + i);
		}

		*(_all_args + b) = '\n';
		b++;
	}

	*(_all_args + b) = '\0';

	return (_all_args);
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
