#include "holberton.h"
/**
 *jack_bauer - prints every minute of the day in military time.
 *
 *
 *
 * Return: 0 success
 *
 */

void jack_bauer(void)
{
	int hours;
	int mins;

	for (hours = 0; hours < 24; hours++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins % 10 + '0');
			_putchar('\n');
	       	}
	}
}
