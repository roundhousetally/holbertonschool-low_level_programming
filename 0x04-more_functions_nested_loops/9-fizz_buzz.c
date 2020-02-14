#include <stdio.h>

/**
 *main - entry point, printing numbers 1-100
 *
 *except multiples of 3, 5, and 3 & 5- replacing with words.
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a > 1 && a < 101)
		{
			printf(" ");
		}
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else
			printf("%d", a);

	}
	printf("\n");
}
