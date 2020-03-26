#include "holberton.h"

/**
 * clear_bit - resets value of a bit to 1
 * @n: pointer to long number
 * @index: index
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 32) /* bits in a unsigned long */
		return (-1);

	mask = 1 << index; /* making a mask and shifting bits over */
	*n &= ~(mask); /*inverting all bits in mask, performs and on each */
	return (1);
}
