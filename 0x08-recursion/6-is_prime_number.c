#include "holberton.h"

/**
 *is_prime_number - calculates whether a number is prime or not
 *
 *@n: the number to check
 *
 *Return:1 if prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n < 2 || n % 2 == 0 || n % 5 == 0)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 != 0)
	{
		return (1);
	}
	else
	{
		return (is_prime_number(n));
	}
}
