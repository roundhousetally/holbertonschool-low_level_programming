#include "holberton.h"

/**
 * flip_bits- counts the amount of bits needed to flip
 * @n: first number
 * @m: second number
 * Return: the number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b, count = 0;

	b = (n ^ m);

	while (b)
	{
		count += b & 1;
		b >>= 1;
	}
	return (count);
}
