#include "holberton.h"

/**
 * print_alphabet_x10 - writes the alphabet to stdout 10 times
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	int l = 0;

	while (l < 11)
	{
		char ch;

		for (ch = 'a' ; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
			l++;
	}
}
