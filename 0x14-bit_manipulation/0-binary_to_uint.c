#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the string that holds the binary number
 * Return: the unsigned int ver of the binary number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		num = num << 1; /* shift bits by 1 */
		if (*b != '0' && *b != '1') /* checking if not 0 or 1 */
			return (0);
		if (*b == '1')
			num = num ^ 1; /* xor with 1 on binaries */
		b++; /* move through b */
	}

	return (num);
}
