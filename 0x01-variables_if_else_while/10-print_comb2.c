#include <stdio.h>


/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 100; a++)
	{
		b = a / 10;
		c = a % 10;

		putchar(b + '0');
		putchar(c + '0');
		if (a < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);

}
