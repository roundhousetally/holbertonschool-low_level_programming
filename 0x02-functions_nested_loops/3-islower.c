#include <unistd.h>
#include "holberton.h"


/**
 *_islower - checks if a letter is lowercase or not.
 *
 *@c: the integer to be checked.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
