#include "holberton.h"
#include <stdlib.h>

/**
 *_strdup - returns a pointer to a newly allocated
 *space in memory that contains a copy of a string given as param.
 *
 *@str: the string as param to be copied
 *
 *Return: Null is str is null or if insufficient memory.
 *on success rturns a pointer to dup'd string
 */
char *_strdup(char *str)
{
	char *t;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	t = malloc(sizeof(*str));

	if (t == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		t[i] = str[i];
	}
	return (t);
}
