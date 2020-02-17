#include "holberton.h"


/**
 *swap_int- swaps values of two integers
 *@a: starting integer
 *@b: integer value that will replace a.
 * Return: On success 1.
 *
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
