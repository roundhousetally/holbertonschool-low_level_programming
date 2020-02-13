#include "holberton.h"

/**
 * more_numbers - prints numbers 0 through 14, ten times.
 *
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int l;
	int i;

	for (l = 0; l < 10; l++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
	_putchar('\n');
	}
}
