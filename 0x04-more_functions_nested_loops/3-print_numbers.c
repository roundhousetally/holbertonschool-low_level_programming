#include "holberton.h"

/**
 * print_numbers - prints number 0 through 9
 *
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');

}
