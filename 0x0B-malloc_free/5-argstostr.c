#include "holberton.h"
#include <stdlib.h>
/**
 *argstostr - concat arguments to the program
 *
 *@ac: arg count
 *@av: args
 *
 *Return: pointer to a string or NULL if it fails
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

		b++;
	}

	*(_all_args + b) = '\0';

	return (_all_args);
}
