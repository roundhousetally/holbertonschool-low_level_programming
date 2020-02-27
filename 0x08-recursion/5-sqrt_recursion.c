#include "holberton.h"

/**
 *_sqrt_recursion - returns the natural sq root of a number
 *
 *@n: the number to calculate sq root
 *
 *Return: the square root, if n does not have a sq root, return -1
 */
int _sqrt_recursion(int n)
{
	int x = 2;

	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n > 1)
	{
		return (_sqrt_recursion());
	}
	else
	{
		return (-1);
	}
	return (0);
}
