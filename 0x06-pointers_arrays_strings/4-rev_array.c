#include "holberton.h"

/**
 *reverse_array- descr
 *
 *
 *Return:
 *
 */
void reverse_array(int *a, int len)
{

	int t;
	int j;

	int tamp[len];

	for (j = 0; j < len; j++)
	{
		tamp[j] = a[j];

	}
	for (t = 0, j = len - 1; j >= 0 && t < len; t++, j--)
	{
		a[t] = tamp[j];

	}

}
