#include "holberton.h"

/**
 *_sqrt_recursion - returns the natural sq root of a number
 *
 *@n: the number to calculate sq root
 *@y: to please betty I had to put this desc. here.
 *Return: the square root, if n does not have a sq root, return -1
 */
int squarerootfinder(int n, int y);
int _sqrt_recursion(int n)
{
	return (squarerootfinder(n, 1));
}
/**
 *squarerootfinder- function finds the sq root
 *
 *@n: the number to check against
 *@y: exp
 *
 *Return: y or -1 if not a sq root
 */
int squarerootfinder(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	if (y * y < n)
	{
		return (squarerootfinder(n, y + 1));
	}
	else
	{
		return (-1);
	}
	return (0);
}
