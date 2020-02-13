#include <unistd.h>
#include "holberton.h"


/**
 *print_diagonal - prints the backslash char after an amount of space
 *
 *@l: determines line length of diagonal
 *
 * Return: On success 0;
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
	int r;
	int s;
	if(n > 0)
	{
		for(r = 1; r <= n; r++)
		{
			for(s = 1; s < r; s++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
