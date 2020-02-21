#include "holberton.h"

/**
 *reverse_array- descr
 *@a: the string to reverse
 *@len: amount to reverse
 *Return: void
 *
 */
void reverse_array(int *a, int len)
{

	int i;
	int j;
	int tamp[1000];

	for (i = 0; i < len; i++)
	{
		tamp[i] = a[i];

	}
	for (i = 0, j = len - 1; j >= 0 && i < len; i++, j--)
	{
		a[i] = tamp[j];

	}

}
