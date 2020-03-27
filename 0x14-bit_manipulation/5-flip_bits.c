#include "holberton.h"

/**
 * flip_bits- counts the amount of bits needed to flip
 * @n: first number
 * m: second number
 * Return: the number of bits needed to flip
 */

int countbits(int n);

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countbits(n ^ m));
}

/**
 * countbits- counts the flipped bits
 * @n: incoming number
 * Return: count of flipped bits
 */
int countbits(int n)
{
	int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}
