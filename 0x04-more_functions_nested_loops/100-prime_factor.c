#include <stdio.h>
#include <math.h>

/**
 * main- entry point
 *
 *
 *
 *Return: 0
 *
 */
int main(void)
{
	int i;
	long int n = 612852475143;
	long int max = -1;

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	printf("%ld\n", max);

	return (0);
}
