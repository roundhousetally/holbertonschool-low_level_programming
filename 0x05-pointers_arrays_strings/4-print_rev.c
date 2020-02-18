#include "holberton.h"


/**
 *print_rev - prints a string in reverse
 *
 *@s: the string to be reversed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	s--;
	for (j = 0; j < i; j++)
	{
		_putchar(*s);
		s--;
	}
	_putchar(10);
}
