#include "holberton.h"

/**
 *_puts_recursion -prints a string followed by a new line.
 *
 *@s: the string to print.
 *
 *Return: string
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
