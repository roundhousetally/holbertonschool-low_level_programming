#include "holberton.h"

/**
 *wildcmp -  compares two strings
 *
 *@s1: first string
 *@s2: second string
 *
 *Return: 1 if identical, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
