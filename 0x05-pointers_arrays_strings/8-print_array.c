#include "holberton.h"
#include <stdio.h>


/**
 *print_array - prints an array of integers followed by a newline.
 *
 *@n: number of elements in the array to be printed.
 *@a: array
 * Return: On success 0
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		printf(",");
		printf(" ");
	}
		printf("\n");
	}
