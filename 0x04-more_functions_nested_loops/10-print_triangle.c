#include "holberton.h"


/**
 *print_triangle - prints a triangle
 *
 *@size: size of the triangle
 *
 * Return: On success 0;
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_triangle(int size)
{
	int r;
	int s;
	int h;

	if (size > 0)
	{
		for (r = 0; r < size; r++)
		{
			for (s = 1; s < (size - r) ; s++)
			{
				_putchar(32);
			}
			for (h = 0; h <= r; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
