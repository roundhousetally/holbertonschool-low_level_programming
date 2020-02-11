#include "holberton.h"
/**
 *print_sign - prints the sign of a number
 *
 *@n: the number to be checked.
 *
 * Return: 1 if greater than zero
 * 0 if equal to 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
		_putchar(45);
	return (-1);
}
