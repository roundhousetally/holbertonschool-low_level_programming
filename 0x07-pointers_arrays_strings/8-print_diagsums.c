#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - prints the sum of two diagonals of a sq matrix of ints
 *
 *@a: pointer to array
 *@size: size of array
 *
 */
void print_diagsums(int *a, int size)
{
	int Sum = 0;
	int rows, columns;

	for (columns = size; columns >= 0; columns--)
	{
		for (rows = 0; a[rows] < size; rows++)
		{
			Sum = Sum + a[rows];
		}
	}
	printf("%d", Sum);

}
