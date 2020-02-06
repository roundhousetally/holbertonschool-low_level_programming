#include <stdio.h>


/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
