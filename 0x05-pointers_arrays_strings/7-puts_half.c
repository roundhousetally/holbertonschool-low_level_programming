#include "holberton.h"


/**
 * _strlen - length of a string
 *@s: the string
 *
 *
 * Return: the length of the string
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}
/**
 *puts_half - prints the second half of a string
 *
 *@str: the string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts_half(char *str)
{
	int n;
	int l;

	n = _strlen(str);

	if (n % 2 == 0)
	{
		for (l = (n / 2); l < n; l++)
		{
			_putchar(str[l]);
		}
	}

	else
	{
		for (l = ((n / 2) + 1); l < n; l++)
		{
			_putchar(str[l]);
		}
	}
	_putchar(10);
}
