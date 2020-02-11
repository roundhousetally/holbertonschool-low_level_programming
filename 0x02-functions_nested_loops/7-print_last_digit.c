#include "holberton.h"
#include <unistd.h>
/**
 *print_last_digit - returns the value of the last digit of a num.
 *
 *@l: the number to be checked.
 *
 * Return: Last digit
 *
 */
int print_last_digit(int l)
{
	int n;

	if (l > '0')
	{
		n = l % 10;
		_putchar(n + '0');
	}
	else if (l < '0')
	{
		l = l * (-1);
		n = l % 10;
		_putchar(n + '0');
	}
	return (n);
}
