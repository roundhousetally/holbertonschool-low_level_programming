#include "holberton.h"
/**
 *print_last_digit - returns the value of the last digit of a num.
 *
 *@n: the number to be checked.
 *
 * Return: Last digit
 *
 */

int print_last_digit(int n)
{
	n = (n % 10);
	if (n < 0)
	{
		n = (n * -1);
	}
	_putchar(n + '0');

	return (n);
}
