#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - prints n amount of strings
 *
 *@separator: separates strings
 *@n: amount of strings to print
 *
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argp;

	char *temp;

	unsigned int i;

	va_start(argp, n);

	if (n < 1)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		temp = va_arg(argp, char *);

		if (temp == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", temp);
		}
		if (separator != NULL && i + 1 < n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argp);
}
