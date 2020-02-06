#include <stdio.h>


/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
		if (ch == 'e' || ch == 'q')
			ch++;
	}
	putchar('\n');
	return (0);
}
