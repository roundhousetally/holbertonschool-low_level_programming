#include <ctype.h>
#include "holberton.h"
/**
 *_isalpha - checks if a character is alphabetic.
 *
 *@c: the character to be checked.
 *
 * Return: On success 1 if it is a letter.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
		return (0);
}
