#include "holberton.h"
#include <unistd.h>
/**
 *_abs - computes the absolute value of an integer.
 *
 *@i: the number to be checked.
 *
 * Return: Absolute value
 *
 */

int _abs(int i)
{
	if (i >= 1)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (i * (-1));
	}
	return (0);
}
