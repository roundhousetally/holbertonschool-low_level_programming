#include "holberton.h"

/**
 *set_string - sets the vlaue of a pointer to a char
 *
 *@s: the double pointer to set to a char
 *@to: original pointer to char
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
