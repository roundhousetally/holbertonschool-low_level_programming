#include "holberton.h"

/**
 *_print_rev_recursion - prints a string in reverse
 *
 *@s: the string to reverse
 *
 *Return: a printed string in reverse
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[i]);
	}
}
