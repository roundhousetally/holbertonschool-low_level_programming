#include "holberton.h"


/**
 *print_square - prints a square
 *
 *@size: size of the square
 *
 * Return: On success 0;
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_square(int size)
{
	int r;
	int c;

	if (size > 0)
	{
		for (r = 1; r <= size; r++)
		{
			for (c = 1; c <= size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
