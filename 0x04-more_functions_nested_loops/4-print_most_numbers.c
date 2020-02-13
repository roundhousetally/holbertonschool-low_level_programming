#include "holberton.h"

/**
 * print_most_numbers - prints numbers 0 through 9 except for 2 and 4
 *
 * Return: Always 0 (success)
 */
void print_most_numbers(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		_putchar(ch);
		ch++;
		if (ch == '2' || ch == '4')
			ch++;
	}
	_putchar('\n');

}
