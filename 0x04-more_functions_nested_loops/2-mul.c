#include "holberton.h"


/**
 *mul - multiplies two integers together
 *
 *@a: first integer
 *@b: second integer
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int mul(int a, int b)
{
	int c;

	c = a * b;
	return (c);

}
