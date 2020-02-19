#include "holberton.h"


/**
 *puts2 - prints every other char from a string
 *
 *@str: the string to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i])
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
