#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: value of the bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;


	bit = (n >> index) & 1;

	return (bit);

	if (!bit || !index || !n)
		return (-1);
}
