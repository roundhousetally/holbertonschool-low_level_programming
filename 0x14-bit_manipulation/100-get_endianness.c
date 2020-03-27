#include "holberton.h"

/**
 * get_endianness - tells if a machine is a big or little endian
 * Return: 1 if little endian, 0 if big
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
