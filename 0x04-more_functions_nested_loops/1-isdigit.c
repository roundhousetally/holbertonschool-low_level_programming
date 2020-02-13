#include <unistd.h>
#include "holberton.h"


/**
 *_isdigit - checks if a letter is lowercase or not.
 *
 *@c: the integer to be checked.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
