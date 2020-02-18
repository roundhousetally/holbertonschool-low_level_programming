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
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
